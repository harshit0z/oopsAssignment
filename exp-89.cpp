#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class SafeArray {
    T* arr;
    int size;
public:
    SafeArray(int s): size(s) {
        if(size <= 0) throw invalid_argument("Size must be positive");
        arr = new T[size];
    }
    ~SafeArray() { delete[] arr; }
    T& operator[](int i) {
        if(i < 0 || i >= size) throw out_of_range("Index out of bounds");
        return arr[i];
    }
    int getSize() const { return size; }
};

int main() {
    try {
        SafeArray<int> sa(5);
        for(int i=0; i<sa.getSize(); i++)
            sa[i] = i*10;
        cout << sa[2] << endl;
        cout << sa[10] << endl; // Will throw exception
    } catch (exception &e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}