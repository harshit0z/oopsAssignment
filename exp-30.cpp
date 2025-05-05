#include <iostream>

using namespace std;

double area(int);

int main() {
    cout<<"Area = "<<area(5);
    return 0;
}


double area(int r) {return 3.14*r*r;}