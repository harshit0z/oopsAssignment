#include <iostream>

using namespace std;

int prod(int, int);

int main() {
    cout<<"Product = "<<prod(5, 3);
    return 0;
}


int prod(int a, int b){return a*b;}