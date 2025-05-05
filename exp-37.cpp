#include <iostream>

using namespace std;

inline int cb(int);

int main() {
    cout<<"Cube = "<<cb(5);
    return 0;
}

inline int cb(int a) {
    return a*a*a;
}