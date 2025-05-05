#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw()=0;
    virtual ~Shape(){}
};

class Circle: public Shape {
public:
    void draw(){ cout<<"Circle"<<endl; }
};

class Rectangle: public Shape {
public:
    void draw(){ cout<<"Rectangle"<<endl; }
};

class Triangle: public Shape {
public:
    void draw(){ cout<<"Triangle"<<endl; }
};

int main(){
    Shape* s1=new Circle();
    Shape* s2=new Rectangle();
    Shape* s3=new Triangle();

    s1->draw();
    s2->draw();
    s3->draw();

    delete s1;
    delete s2;
    delete s3;
    return 0;
}