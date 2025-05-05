#include <iostream>
#include <cmath> 
using namespace std;



int main(){
    int num = 123945, count = 0;
    if(num==0)count=1;
    while(num!=0){
        count++;
        num/=10;
    }
    cout<<count;

    return 0;
}


