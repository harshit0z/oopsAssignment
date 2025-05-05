#include <iostream>
using namespace std;

class Logger {
public:
    ~Logger() { cout<<"Logger destroyed"<<endl; }
};

int main() {
    Logger l;
    return 0;
}