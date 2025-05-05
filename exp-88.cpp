#include <iostream>
using namespace std;

void callbackFunc() {
    cout<<"Callback called"<<endl;
}

void performAction(void (*cb)()) {
    cout<<"Performing action..."<<endl;
    cb();
}

int main() {
    performAction(callbackFunc);
    return 0;
}