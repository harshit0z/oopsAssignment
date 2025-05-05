#include <iostream>
#include <cmath>

using namespace std;


double cint(double prin, double rate, int time){
    double amount = prin * pow((1 + rate / 100), time); 
    double interest = amount - prin;  

    return interest;
}
int main() {
    double prin = 5.5, rate = 1.2;
    int time = 2;
    cout<<"Principle amount = "<<prin<<endl<<"Rate = "<<rate<<endl<<"Time = "<<time<<endl;
    cout<<"Compound interest = "<<cint(prin, rate, time);
    return 0;
}

