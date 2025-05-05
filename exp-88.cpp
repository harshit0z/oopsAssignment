#include <iostream>
using namespace std;

class Employee {
public:
    virtual void work() { cout<<"Employee working"<<endl; }
    virtual ~Employee(){}
};

class Manager: public Employee {
public:
    void work() override { cout<<"Manager managing"<<endl; }
};

int main(){
    Employee* e=new Manager();
    e->work();
    delete e;
    return 0;
}