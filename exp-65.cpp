#include <iostream>
using namespace std;

class Point {
    int x,y;
public:
    Point():x(0),y(0){}
    Point(int a,int b):x(a),y(b){}
    Point(const Point& p):x(p.x),y(p.y){}
    void show(){cout<<x<<" "<<y<<endl;}
};

int main(){
    Point p1;
    Point p2(5,10);
    Point p3=p2;
    p1.show();
    p2.show();
    p3.show();
    return 0;
}