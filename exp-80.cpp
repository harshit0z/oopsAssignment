#include <iostream>
using namespace std;

class Person {
protected:
    string name;
public:
    Person(string n):name(n){}
    void show(){ cout<<name<<endl; }
};

class Employee: public Person {
    int id;
public:
    Employee(string n,int i):Person(n),id(i){}
    void show(){
        cout<<name<<" "<<id<<endl;
    }
};

int main(){
    Employee e("Alice",101);
    e.show();
    return 0;
}