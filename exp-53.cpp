#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int bin = 1001, current=0, dec=0, count=0;

    while(bin!=0){
        current = bin%10;
        dec += pow(2, count) * current;
        bin /= 10;
        count++;
    }

    cout<<dec;
    return 0;
}