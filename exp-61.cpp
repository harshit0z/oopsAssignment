#include <iostream>

using namespace std;

class Person{

    public:
        Person ret(){
            return *this;
        }
};

int main() {
    Person b;
    b.ret().ret().ret().ret(); // b.ret returns Person type

    return 0;
}