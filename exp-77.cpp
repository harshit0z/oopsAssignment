#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int size, T key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            return i; // Return the index of the found element
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int intArray[] = {1, 2, 3, 4, 5};
    double doubleArray[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArray[] = {'a', 'b', 'c', 'd', 'e'};

    int intKey = 3;
    double doubleKey = 4.4;
    char charKey = 'c';

    int intIndex = linearSearch(intArray, 5, intKey);
    int doubleIndex = linearSearch(doubleArray, 5, doubleKey);
    int charIndex = linearSearch(charArray, 5, charKey);

    cout << "Index of " << intKey << " in intArray: " << intIndex << endl;
    cout << "Index of " << doubleKey << " in doubleArray: " << doubleIndex << endl;
    cout << "Index of " << charKey << " in charArray: " << charIndex << endl;

    return 0;
}