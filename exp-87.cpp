#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() { cout<<"Shape"<<endl; }
};

class Circle: public Shape {
public:
    void draw() override { cout<<"Circle"<<endl; }
};

int main(){
    Shape* s=new Circle();
    s->draw();
    delete s;
    return 0;
}