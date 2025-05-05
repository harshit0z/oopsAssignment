#include <iostream>
#include <stdexcept>
using namespace std;

template <typename T>
class Collection {
public:
    virtual void add(T val) = 0;
    virtual void remove(T val) = 0;
    virtual T get(int index) = 0;
    virtual int size() = 0;
    virtual ~Collection() {}
};

template <typename T>
class ArrayList : public Collection<T> {
    T* arr;
    int capacity;
    int count;
    void resize() {
        int newCap = capacity * 2;
        T* newArr = new T[newCap];
        for(int i=0; i<count; i++) newArr[i] = arr[i];
        delete[] arr;
        arr = newArr;
        capacity = newCap;
    }
public:
    ArrayList(int cap = 10): capacity(cap), count(0) {
        if(capacity <= 0) throw invalid_argument("Capacity must be positive");
        arr = new T[capacity];
    }
    ~ArrayList() { delete[] arr; }

    void add(T val) override {
        if(count == capacity) resize();
        arr[count++] = val;
    }
    void remove(T val) override {
        int i=0;
        for(; i<count; i++) {
            if(arr[i] == val) break;
        }
        if(i == count) throw invalid_argument("Value not found");
        for(int j=i; j<count-1; j++) arr[j] = arr[j+1];
        count--;
    }
    T get(int index) override {
        if(index < 0 || index >= count) throw out_of_range("Index out of bounds");
        return arr[index];
    }
    int size() override { return count; }
};

int main() {
    try {
        ArrayList<int> list;
        list.add(10);
        list.add(20);
        list.add(30);
        cout << "Size: " << list.size() << endl;
        cout << "Element at 1: " << list.get(1) << endl;
        list.remove(20);
        cout << "Size after removal: " << list.size() << endl;
        list.get(5); // will throw
    }
    catch(const exception &e) {
        cout << "Exception: " << e.what() << endl;
    }
    return 0;
}