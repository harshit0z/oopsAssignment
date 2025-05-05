#include <iostream>

using namespace std;

void swap(int *, int *);

int main() {
    int a = 2, b = 5;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    swap(&a, &b);
    cout<<"a = "<<a<<" b = "<<b;
    
    return 0;
}

void swap(int *a, int * b){
    int temp = *a;
    *a = *b;
    *b = temp;
    cout<<"Swaped"<<endl;
}