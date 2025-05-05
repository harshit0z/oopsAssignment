#include <iostream>
using namespace std;

template <typename T>
class LinkedList {
    struct Node {
        T data;
        Node* next;
        Node(T val): data(val), next(nullptr) {}
    };
    Node* head;
public:
    LinkedList(): head(nullptr) {}
    void insert(T val){
        Node* n=new Node(val);
        n->next=head;
        head=n;
    }
    void remove(T val){
        Node* curr=head;
        Node* prev=nullptr;
        while(curr){
            if(curr->data==val){
                if(prev) prev->next=curr->next;
                else head=curr->next;
                delete curr;
                return;
            }
            prev=curr;
            curr=curr->next;
        }
    }
    void display(){
        Node* curr=head;
        while(curr){
            cout<<curr->data<<" ";
            curr=curr->next;
        }
        cout<<endl;
    }
    ~LinkedList(){
        Node* curr=head;
        while(curr){
            Node* nxt=curr->next;
            delete curr;
            curr=nxt;
        }
    }
};

int main(){
    LinkedList<int> list;
    list.insert(10);
    list.insert(20);
    list.insert(30);
    list.display();
    list.remove(20);
    list.display();
    return 0;
}