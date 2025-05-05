#include <iostream>
using namespace std;

class Base {
protected:
    string name;
public:
    Base(string n):name(n){}
    void show(){ cout<<name<<endl; }
};

class Intermediate: public Base {
public:
    Intermediate(string n):Base(n){}
};

class Derived: public Intermediate {
public:
    Derived(string n):Intermediate(n){}
};

int main(){
    Derived d("Derived");
    d.show();
    return 0;
}