#include <iostream>
using namespace std;

bool func(int);

int main(){
    
    bool prime = func(4);
    if(prime){
        cout<<"Number is prime";
    }else{
        cout<<"Number is not prime";
    }

    return 0;
}


bool func(int num){
    if (num <= 1) return false;

    for (int i = 2; i<=num/2;i++){
        if (num%i == 0){
            return false;
        }
    }

    return true;
}