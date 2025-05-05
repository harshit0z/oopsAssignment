#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front, rear;
public:
    Queue(): front(0), rear(0) {}
    void enqueue(T val) {
        if(rear==100) return;
        arr[rear++]=val;
    }
    void dequeue() {
        if(front==rear) return;
        front++;
    }
    void display() {
        for(int i=front;i<rear;i++)
            cout<<arr[i]<<" ";
        cout<<endl;
    }
    bool isEmpty() { return front==rear; }
};

int main(){
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.display();
    q.dequeue();
    q.display();
    return 0;
}