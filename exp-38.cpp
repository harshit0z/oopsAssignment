#include <iostream>

using namespace std;

inline int sum(int, int);

int main() {
    cout<<"Sum = "<<sum(5, 2);
    return 0;
}

inline int sum(int a, int b){
    return a+b;
}