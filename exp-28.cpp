#include <iostream>

using namespace std;

int fact(int);


int main() {
    cout<<fact(5);
    return 0;
}


int fact(int num){
    long int fact=1;
    while(num>=1){
        fact *= num--;
    }
    return fact;
}