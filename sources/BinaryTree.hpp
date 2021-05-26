#pragma once
#include <iostream>

namespace ariel {

    template<typename T> class BinaryTree{
        
        private:
            struct Node{
                T value;
                Node *left, *right;
                
                Node(T &val = 0, Node *l = nullptr, Node *r = nullptr) : value(val), left(l), right(r) {}

                ~Node(){
                    delete left;
                    delete right;
                }
            };

            Node *root;
        
        public:
            BinaryTree() : root() {}

            ~BinaryTree(){}

            BinaryTree& add_root(T val){
                return *this;
            }

            BinaryTree& add_left(const T &parent, const T &son){
                return *this;
            }

            BinaryTree& add_right(const T &parent, const T &son){
                return *this;
            }

            friend std::ostream &operator<<(std::ostream &os, const BinaryTree<T>& binaryTree){
                
                return os;
            }

       
            class Inorder{
                private:
                    Node *node;

                public:

                    Inorder(Node* ptr = nullptr) : node(ptr){}
                    
                    T& operator*() const{
                        return node->value;
                    }

                    T* operator->() const{
                        return &(node->value);
                    }
                    
                    Inorder& operator++(){
                        return *this;
                    }

                    const Inorder operator++(int){
                        return *this;
                    }

                    bool operator==(const Inorder& p) const{return true;}
                    bool operator!=(const Inorder& p) const{return false;}
                   


            };

            class Postorder{
                private:
                    Node *node;
 

                public:

                    Postorder(Node* ptr = nullptr) : node(ptr){}     

                    T& operator*() const{
                        return node->value;
                    }

                    T* operator->() const{
                        return &(node->value);
                    }

                    Postorder& operator++(){
                        return *this;
                    }

                    const Postorder operator++(int){
                        return *this;
                    }

                    bool operator==(const Postorder& p) const{return true;}
                    bool operator!=(const Postorder& p) const{return false;} 
                    


            };
                 class Preorder{
                private:
                    Node *node;       

                public:

                    Preorder(Node* ptr = nullptr) : node(ptr){}       
            
                    T& operator*() const{
                        return node->value;
                    }

                    T* operator->() const{
                        return &(node->value);
                    }
                    
                    Preorder& operator++(){
                        return *this;
                    }

                    const Preorder operator++(int){
                        return *this;
                    }

                    bool operator==(const Preorder& p) const{return true;}
                    
                    bool operator!=(const Preorder& p) const{return false;}   

            }; 


            Preorder begin_preorder(){return Preorder{root};}

            Preorder end_preorder(){return Preorder{root};} 

            Inorder begin_inorder(){return Inorder{root};}

            Inorder end_inorder(){return Inorder{root};}

            Postorder begin_postorder(){return Postorder{root};}

            Postorder end_postorder(){return Postorder{root};}

            Inorder begin(){return Inorder{root};}
			
            Inorder end(){return Inorder{root};}

    };
};