#include <iostream>

using namespace std;

class Employee{

    public:
        virtual void calculateSalary() = 0;
        virtual void displayDetails() = 0;
};

class Manager: public Employee{
    public:
        void calculateSalary() override{cout<<"Salary of Manager  = 7 crore"<<endl;}
        void displayDetails() override{cout<<"Details of Manager = ..."<<endl;}
};

class Engineer: public Employee{
    public :
        void calculateSalary() override{cout<<"Salary of engineer = 150 ruipya dega"<<endl;}
        void displayDetails() override{cout<<"Details of engineer = Usko khud nahi pata"<<endl;}
};

int main() {
    Employee *e = new Manager();
    e->calculateSalary();
    e->displayDetails();
    e = new Engineer();
    e->calculateSalary();
    e->displayDetails();
    return 0;
}