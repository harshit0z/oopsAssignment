#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound()=0;
    virtual ~Animal(){}
};

class Mammal: virtual public Animal {
public:
    void sound(){ cout<<"Mammal sound"<<endl; }
};

class WingedAnimal: virtual public Animal {
public:
    void sound(){ cout<<"Winged animal sound"<<endl; }
};

class Bat: public Mammal, public WingedAnimal {
public:
    void sound(){ cout<<"Bat sound"<<endl; }
};

int main(){
    Bat b;
    b.sound();
    return 0;
}