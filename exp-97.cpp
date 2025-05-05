#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
T safeDivide(T a, T b) {
    if(b == 0) throw invalid_argument("Division by zero");
    return a / b;
}

template <typename T>
T safeSqrt(T a) {
    if(a < 0) throw invalid_argument("Square root of negative number");
    T res = 0, step = 0.01;
    while(res*res < a) res += step;
    return (res*res - a < a - (res - step)*(res - step)) ? res : res - step;
}

int main() {
    try {
        cout << safeDivide(10, 2) << endl;
        cout << safeDivide(5, 0) << endl;
    } catch(const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    try {
        cout << safeSqrt(16) << endl;
        cout << safeSqrt(-4) << endl;
    } catch(const exception& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}