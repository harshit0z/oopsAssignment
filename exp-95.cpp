#include <iostream>
#include <memory>
using namespace std;

template <typename T, int Capacity>
class Container {
    unique_ptr<T[]> data;
    int count;
public:
    Container(): data(new T[Capacity]), count(0) {}
    bool add(const T& val) {
        if(count == Capacity) return false;
        data[count++] = val;
        return true;
    }
    T& get(int index) {
        if(index < 0 || index >= count) throw out_of_range("Index out of bounds");
        return data[index];
    }
    int size() { return count; }
};

int main() {
    Container<int, 5> c;
    c.add(10);
    c.add(20);
    c.add(30);
    for(int i = 0;i < c.size(); i++)
        cout << c.get(i) << " ";
    cout << endl;
    return 0;
}