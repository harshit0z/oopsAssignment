#include <iostream>

using namespace std;

int max(int a, int b , int c);

int main() {
    cout<<"Max = "<<max(1,2,3);
    return 0;
}


int max(int a, int b , int c){
    int max = a;
    if (max<b) max = b;
    if (max<c) max = c;

    return c;
}