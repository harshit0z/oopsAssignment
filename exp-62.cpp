#include <iostream>
using namespace std;

class Math {
public:
    static int add(int a, int b) { return a + b; }
    static int sub(int a, int b) { return a - b; }
};

int main() {
    cout << Math::add(5, 3) << endl;
    cout << Math::sub(5, 3) << endl;
    return 0;
}