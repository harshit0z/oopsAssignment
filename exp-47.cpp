#include <iostream>

using namespace std;

int fact(int); 
int main() {
    cout<<fact(5);
    return 0;
}


int fact(int n){
    if(n<2) return 1;

    return n*fact(n-1);
}