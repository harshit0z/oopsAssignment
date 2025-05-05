#include <iostream>
#include <cmath>

using namespace std;

void powFunc(int num, int p=2){
    cout<<num<<"^"<<p<<" = "<<pow(num, p)<<endl;
}

int main() {
    powFunc(4,4);
    powFunc(4);
    return 0;
}