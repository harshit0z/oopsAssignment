#include <iostream>

using namespace std;

void inc(int *);

int main() {
    int a = 13;
    cout<<"A = "<<a<<endl;
    inc(&a);
    cout<<"A = "<<a<<endl;
    
    return 0;
}

void inc(int *a){
    *a += 10;
    cout<<"Value Increased"<<endl;
}