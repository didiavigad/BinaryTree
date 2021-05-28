#pragma once
#include <iostream>

namespace ariel {

    template<typename T> class BinaryTree{
        
        public:
            struct Node{
                T value;
                Node *left, *right;
                
                Node(T val) : value(val), left(nullptr), right(nullptr) {}
                ~Node(){}
            };

            Node *root;
        
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
                public:
                    Node *node;

                    Inorder(Node*) : node(nullptr){}
                    
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

                    Postorder(Node* ) : node(nullptr){}     

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
                public:
                    Node *node;       


                    Preorder(Node*) : node(nullptr){}       
            
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
