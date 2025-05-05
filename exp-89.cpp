#include <iostream>
using namespace std;

class Entity {
public:
    virtual void info()=0;
    virtual ~Entity(){}
};

class Person: virtual public Entity {
public:
    void info(){ cout<<"Person"<<endl; }
};

class Organization: virtual public Entity {
public:
    void info(){ cout<<"Organization"<<endl; }
};

int main(){
    Person p;
    Organization o;
    p.info();
    o.info();
    return 0;
}