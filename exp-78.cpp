#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound()=0;
    virtual ~Animal(){}
};

class Dog: public Animal {
public:
    void sound(){ cout<<"Woof"<<endl; }
};

class Cat: public Animal {
public:
    void sound(){ cout<<"Meow"<<endl; }
};

class Bird: public Animal {
public:
    void sound(){ cout<<"Chirp"<<endl; }
};

int main(){
    Animal* a1=new Dog();
    Animal* a2=new Cat();
    Animal* a3=new Bird();

    a1->sound();
    a2->sound();
    a3->sound();

    delete a1;
    delete a2;
    delete a3;
    return 0;
}