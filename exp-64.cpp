#include <iostream>

using namespace std;

class Shape{

    public:
        virtual void draw(){cout<<"Drawing a shape"<<endl;}
};

class Circle: public Shape{
    public :
    void draw() override{cout<<"Drawing a circle"<<endl;}
};

class Square:public Shape{
    public :
        void draw() override{cout<<"Drawing a square"<<endl;}
};

int main() {
    Shape *s;
    Circle c;
    Square sq;
    s = &c;
    s->draw();
    s = &sq;
    s->draw();
    return 0;
}