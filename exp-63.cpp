#include <iostream>

using namespace std;

class Vehicle{

    public:
        virtual void pasangers() = 0;
};

class Bike:public Vehicle{
    public:
        void pasangers() override{
            cout<<"Riders = 2"<<endl;
        }
};

class Car:public Vehicle{
    public: 
        void pasangers() override{
            cout<<"Pasangers = 4"<<endl;
        }
};

int main() {
    Vehicle *v = new Car();
    v->pasangers();
    v = new Bike();
    v->pasangers();
    return 0;
}