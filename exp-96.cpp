#include <iostream>
#include <vector>
using namespace std;

class Animal {
public:
    virtual void sound() = 0;
    virtual void move() = 0;
    virtual ~Animal() {}
};

class Lion : public Animal {
public:
    void sound() override { cout << "Lion roars" << endl; }
    void move() override { cout << "Lion prowls" << endl; }
};

class Bird : public Animal {
public:
    void sound() override { cout << "Bird chirps" << endl; }
    void move() override { cout << "Bird flies" << endl; }
};

class Fish : public Animal {
public:
    void sound() override { cout << "Fish blubs" << endl; }
    void move() override { cout << "Fish swims" << endl; }
};

int main() {
    vector<Animal*> ecosystem;
    ecosystem.push_back(new Lion());
    ecosystem.push_back(new Bird());
    ecosystem.push_back(new Fish());

    for(Animal* a : ecosystem) {
        a->sound();
        a->move();
    }

    for(Animal* a : ecosystem) delete a;

    return 0;
}