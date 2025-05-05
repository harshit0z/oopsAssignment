#include <iostream>
using namespace std;

class Complex {
    int real, imag;
public:
    Complex(int r=0,int i=0):real(r),imag(i){}
    Complex operator+(const Complex& c) {
        return Complex(real+c.real, imag+c.imag);
    }
    void show(){cout<<real<<"+"<<imag<<"i"<<endl;}
};

int main(){
    Complex c1(2,3), c2(4,5), c3;
    c3 = c1 + c2;
    c3.show();
    return 0;
}