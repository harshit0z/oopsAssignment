#include <iostream>
using namespace std;

class Vector {
    int* arr;
    int size;
public:
    Vector(int s):size(s){ arr=new int[size]; }
    ~Vector(){ delete[] arr; }
    int& operator[](int i){ return arr[i]; }
};

int main(){
    Vector v(3);
    v[0]=10;
    v[1]=20;
    v[2]=30;
    cout<<v[0]<<endl;
    cout<<v[1]<<endl;
    cout<<v[2]<<endl;
    return 0;
}