#include <iostream>
using namespace std;

class DynamicArray {
    int* arr;
    int size;
public:
    DynamicArray(int s):size(s) { arr=new int[size]; }
    ~DynamicArray() { delete[] arr; }
    void set(int i,int val) { if(i>=0&&i<size) arr[i]=val; }
    int get(int i) { return (i>=0&&i<size)?arr[i]:-1; }
};

int main() {
    DynamicArray da(5);
    da.set(0,10);
    da.set(1,20);
    cout<<da.get(0)<<endl;
    cout<<da.get(1)<<endl;
    return 0;
}