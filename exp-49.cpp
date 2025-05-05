#include <iostream>

using namespace std;

template <typename T>

T maxF(T a, T b){
    T max =a ;
    if(b>max) return b;
    return max;
}

int main() {
    int x = 5 , y = 10;
	cout<<"Max of "<<x<<" and "<<y<<" is :"<<maxF(x ,y)<<endl;

	double a = 2.33 , b = 2343.2;
	cout<<"Max of "<<a<<" and "<<b<<" is : "<<maxF(a , b)<<endl;
    return 0;
}