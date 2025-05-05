#include <iostream>

using namespace std;

class Appliance{

    public:
        virtual void func(){cout<<"Appliance does something, i don't know what."<<endl;}
};

class WashingMachine: public Appliance{
    public:
        void func() override{cout<<"WashingMachine washes clothes."<<endl;}
};

class Refrigerator: public Appliance{
    public :
        void func() override{cout<<"Refrigerator can freez an ice-creame for you."<<endl;}
};

class Microwave: public Appliance{
    public :
        void func() override{cout<<"Microwave is baking my biscuits";}
};

int main() {
    Appliance  *a;
    a->func();
    a = new WashingMachine();
    a->func();
    a = new Refrigerator();
    a->func();
    a = new Microwave();
    a->func();  
    return 0;
}