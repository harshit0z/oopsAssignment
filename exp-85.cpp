#include <iostream>
using namespace std;

template <typename T>
class SafeArray {
    T* arr;
    int size;
public:
    SafeArray(int s): size(s) { arr = new T[size]; }
    ~SafeArray() { delete[] arr; }
    T& operator[](int i) {
        if(i < 0 || i >= size) throw out_of_range("Index out of bounds");
        return arr[i];
    }
    int getSize() { return size; }
};

int main() {
    SafeArray<int> sa(5);
    try {
        for(int i=0; i<sa.getSize(); i++) sa[i] = i*2;
        cout<<sa[2]<<endl;
        cout<<sa[5]<<endl; // will throw
    } catch (out_of_range& e) {
        cout<<"Exception: "<<e.what()<<endl;
    }
    return 0;
}