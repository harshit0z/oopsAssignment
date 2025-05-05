#include <iostream>

using namespace std;


int main() {
    const int a = 5;
    cout<<"Integer  = "<<a<<endl;
    
    int *b = const_cast<int*>(&a);

    *b = 544;
    cout<<"Modified int = "<<*b<<endl;
    cout<<"Code is not working properly";
    return 0;
}