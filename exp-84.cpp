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

class Derived3: public Derived1, public Derived2 {
public:
    Derived3(string n1,string n2):Derived1(n1),Derived2(n2){}
    void showBoth(){
        Derived1::show();
        Derived2::show();
    }
};

int main(){
    Derived3 d("Derived1","Derived2");
    d.showBoth();
    return 0;
}