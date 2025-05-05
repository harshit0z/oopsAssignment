#include <iostream>

using namespace std;

class Shape{
    protected:
        int w = 4, h = 3;
    public:
        virtual void area() = 0;
};

class Circle: public Shape{
    public:
        void area() override{
            cout<<"Area of Circle = "<<3.14*w*w<<endl;
        }
};

class Rectangle: public Shape{
    public:
        void area() override{
            cout<<"Area of Rectangle = "<<w*h<<endl;
        }
};

class Triangle: public Shape{
    public:
        void area() override{
            cout<<"Area of Triangle = "<<0.5*w*h<<endl;
        }
};

int main() {
    Circle c;
    Rectangle r;
    Triangle t;

    c.area();
    r.area();
    t.area();
    return 0;
}