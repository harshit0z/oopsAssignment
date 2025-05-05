#include <iostream>

using namespace std;

class Bank{
    int acc;
    public:
        void set(int acc){
            this->acc = acc;
        }
};

int main() {
    Bank b;
    b.set(123);
    return 0;
}