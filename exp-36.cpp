#include <iostream>

using namespace std;

inline int sqr(int);

int main() {
    cout<<"Square = "<<sqr(5);
    return 0;
}

inline int sqr(int a) {
    return a*a;
}