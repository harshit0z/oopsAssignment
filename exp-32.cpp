#include <iostream>
#include <cmath> 
using namespace std;



int main(){
    
    int binary = 111, current=0, index=0, num=0;
    while(binary!=0){
        current = binary%10;
        num += pow(2, index) * current;

        binary/=10;
        index++;
    }
    cout<<num;


    return 0;
}

