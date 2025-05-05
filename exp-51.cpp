#include <iostream>
using namespace std;



int main(){
    int odd = 0 , even = 0;
    
    for(int i = 0; i<=100;i++)if(i%2==0) even+=i;
    for(int i = 0; i<=100;i++)if(i%2!=0) odd+=i;

    cout<<"Even sum = "<<even<<endl<<"Odd sum = "<<odd<<endl;
    return 0;
}