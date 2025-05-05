#include <iostream>
using namespace std;

class Vehicle {
public:
    virtual void show()=0;
    virtual ~Vehicle(){}
};

class Car: public Vehicle {
public:
    void show(){ cout<<"Car"<<endl; }
};

class Bike: public Vehicle {
public:
    void show(){ cout<<"Bike"<<endl; }
};

int main(){
    Vehicle* v1=new Car();
    Vehicle* v2=new Bike();

    v1->show();
    v2->show();

    delete v1;
    delete v2;
    return 0;
}