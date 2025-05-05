#include <iostream>
using namespace std;

template <typename T>
T maxVal(T a, T b) {
    return (a > b) ? a : b;
}

int main(){
    cout<<maxVal(10, 20)<<endl;
    cout<<maxVal(3.5, 2.9)<<endl;
    cout<<maxVal('a', 'z')<<endl;
    return 0;
}