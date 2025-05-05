#include <iostream>

using namespace std;

void area(int r){cout<<"Arae of circle = "<<3.14*r*r<<endl;}
void area(int a, int b){cout<<"Arae of rectangle = "<<a*b<<endl;}
void are(int a, double b){cout<<"Arae of triangle = "<<0.5*a*b<<endl;}


int main() {
    int a = 5, b = 2;
    double c = 3.0;
    area(a);
    area(a,b);
    are(a,c);
    return 0;
}