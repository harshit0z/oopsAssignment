#include <iostream>
using namespace std;

int main(){
    int num = 5, fact = 1;

    while(num>0){
        fact *= num;
        num--;
    }
    cout<<fact;
 
    return 0;
}