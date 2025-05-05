#include <iostream>
using namespace std;

int main(){
    int num = 12345, remainder = 0, reversed = 0;

    while(num!=0){
        remainder = num%10;

        reversed = (reversed*10)+remainder;

        num /= 10;
    }

    cout<<reversed;


 
    return 0;
}