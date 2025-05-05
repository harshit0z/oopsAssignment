#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn()=0;
    virtual ~Device(){}
};

class Laptop: public Device {
public:
    void turnOn(){ cout<<"Laptop turned on"<<endl; }
};

class Smartphone: public Device {
public:
    void turnOn(){ cout<<"Smartphone turned on"<<endl; }
};

int main(){
    Device* d1=new Laptop();
    Device* d2=new Smartphone();
    d1->turnOn();
    d2->turnOn();
    delete d1;
    delete d2;
    return 0;
}