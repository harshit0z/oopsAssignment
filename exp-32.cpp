#include <iostream>

using namespace std;

void printArray(int arr[], int s);

int main() {
    int arr[5] = {8,2,4,5,7};
    int size  = sizeof(arr)/sizeof(arr[0]);
    printArray(arr, size);
    return 0;
}


void printArray(int arr[], int s){
    for (int i=0;i<s; i++) cout<<arr[i]<<endl;
}