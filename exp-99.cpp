#include <iostream>
using namespace std;

template <typename T>
class Sorter {
public:
    virtual void sort(T arr[], int n) = 0;
    virtual ~Sorter() {}
};

template <typename T>
class BubbleSort : public Sorter<T> {
public:
    void sort(T arr[], int n) override {
        for(int i=0; i<n-1; i++) {
            for(int j=0; j<n-1-i; j++) {
                if(arr[j] > arr[j+1]) {
                    T temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
};

template <typename T>
class SelectionSort : public Sorter<T> {
public:
    void sort(T arr[], int n) override {
        for(int i=0; i<n-1; i++) {
            int min_idx = i;
            for(int j=i+1; j<n; j++) {
                if(arr[j]<arr[min_idx]) min_idx = j;
            }
            T temp = arr[min_idx];
            arr[min_idx] = arr[i];
            arr[i] = temp;
        }
    }
};

template <typename T>
void printArray(T arr[], int n) {
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {5, 3, 8, 4, 2};
    int n = sizeof(arr)/sizeof(arr[0]);

    Sorter<int>* sorter = new BubbleSort<int>();
    sorter->sort(arr, n);
    printArray(arr, n);
    delete sorter;

    int arr2[] = {9, 1, 6, 7, 0};
    n = sizeof(arr2)/sizeof(arr2[0]);

    sorter = new SelectionSort<int>();
    sorter->sort(arr2, n);
    printArray(arr2, n);
    delete sorter;

    return 0;
}