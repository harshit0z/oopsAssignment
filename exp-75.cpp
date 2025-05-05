#include <iostream>
using namespace std;

class Circle {
    double radius;
public:
    Circle(double r):radius(r){}
    friend double area(Circle&);
};

double area(Circle& c){
    return 3.14159*c.radius*c.radius;
}

int main(){
    Circle c(5);
    cout<<area(c)<<endl;
    return 0;
}