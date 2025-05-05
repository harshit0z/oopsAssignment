#include <iostream>
using namespace std;

class Counter {
    static int count;
public:
    Counter() { count++; }
    static int getCount() { return count; }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    cout << Counter::getCount() << endl;
    return 0;
}
