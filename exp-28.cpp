#include <iostream>
using namespace std;

int main(){
    
    int num = 5, count = 1;
    do{
        cout<<num<<" * "<<count<<" = "<<num*count<<endl;
        count++;
    }while(count<=10);
 
    return 0;
}