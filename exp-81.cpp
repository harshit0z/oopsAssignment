#include <iostream>
using namespace std;

class Parent {
protected:
    string fname;
public:
    Parent(string f):fname(f){}
    void showParent(){ cout<<fname<<endl; }
};

class Child1: public Parent {
public:
    Child1(string f):Parent(f){}
};

class Child2: public Parent {
public:
    Child2(string f):Parent(f){}
};

int main(){
    Child1 c1("Child1");
    Child2 c2("Child2");
    c1.showParent();
    c2.showParent();
    return 0;
}