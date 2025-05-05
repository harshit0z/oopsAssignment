#include <iostream>

using namespace std;

class Box{

    public:
        Box ret(){
            return *this;
        }
};

int main() {
    Box b;
    b.ret(); // b.ret returns Box type

    return 0;
}