#include <iostream>
using namespace std;

template <typename T>
class Stack {
    int top;
    T arr[100];
public:
    Stack():top(-1){}
    void push(T val) {
        if(top==99) return;
        arr[++top]=val;
    }
    void pop() {
        if(top==-1) return;
        top--;
    }
    void display() {
        for(int i=top;i>=0;i--)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
};

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.display();
    s.pop();
    s.display();
    return 0;
}