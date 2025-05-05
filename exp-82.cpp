#include <iostream>
using namespace std;

class Base {
protected:
    string name;
public:
    Base(string n):name(n){}
    void show(){ cout<<name<<endl; }
};

class Derived1: public Base {
public:
    Derived1(string n):Base(n){}
};

class Derived2: public Base {
public:
    Derived2(string n):Base(n){}
};

class Derived3: public Base {
public:
    Derived3(string n):Base(n){}
};

int main(){
    Derived1 d1("Derived1");
    Derived2 d2("Derived2");
    Derived3 d3("Derived3");

    d1.show();
    d2.show();
    d3.show();
    return 0;
}