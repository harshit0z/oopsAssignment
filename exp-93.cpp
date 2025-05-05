#include <iostream>
using namespace std;

template <typename T>
class BinaryTree {
    struct Node {
        T data;
        Node* left;
        Node* right;
        Node(T val): data(val), left(nullptr), right(nullptr) {}
    };
    Node* root;

    void insert(Node*& node, T val) {
        if(!node) node = new Node(val);
        else if(val < node->data) insert(node->left, val);
        else insert(node->right, val);
    }

    void inorder(Node* node) {
        if(node){
            inorder(node->left);
            cout<<node->data<<" ";
            inorder(node->right);
        }
    }

    void destroy(Node* node) {
        if(node){
            destroy(node->left);
            destroy(node->right);
            delete node;
        }
    }

public:
    BinaryTree(): root(nullptr) {}
    ~BinaryTree(){ destroy(root); }
    void insert(T val){ insert(root,val); }
    void inorder(){ inorder(root); cout<<endl; }
};

int main(){
    BinaryTree<int> bt;
    bt.insert(5);
    bt.insert(3);
    bt.insert(7);
    bt.inorder();
    return 0;
}