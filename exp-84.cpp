#include <iostream>
#include <memory>
using namespace std;

class Demo {
public:
    Demo() { cout<<"Demo created"<<endl; }
    ~Demo() { cout<<"Demo destroyed"<<endl; }
    void show() { cout<<"Demo object method"<<endl; }
};

int main() {
    {
        unique_ptr<Demo> p1(new Demo());
        p1->show();
    } // p1 goes out of scope, Demo destroyed

    {
        shared_ptr<Demo> p2 = make_shared<Demo>();
        {
            shared_ptr<Demo> p3 = p2;
            p3->show();
            cout<<"Use count: "<<p2.use_count()<<endl;
        } // p3 destroyed
        cout<<"Use count: "<<p2.use_count()<<endl;
    } // p2 destroyed, Demo destroyed

    return 0;
}