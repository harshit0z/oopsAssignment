#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout<<"Base class"<<endl; }
};

class Derived1: public Base {
public:
    void show() override { cout<<"Derived1 class"<<endl; }
};

class Derived2: public Base {
public:
    void show() override { cout<<"Derived2 class"<<endl; }
};

void display(Base* b) {
    b->show();
}

int main() {
    Base b;
    Derived1 d1;
    Derived2 d2;

    display(&b);
    display(&d1);
    display(&d2);
    return 0;
}