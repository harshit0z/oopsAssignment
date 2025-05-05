#include <iostream>

using namespace std;

void modi(int arr[], int s);

int main() {
    int arr[5] = {1,2,3,4,5};
    int size = (sizeof(arr)/sizeof(arr[0]));

    for (int i = 0; i<size; i++) cout<<arr[i]<<" ";

    modi(arr, size);
    cout<<endl;
    for (int i = 0; i<size; i++) cout<<arr[i]<<" ";


    return 0;
}

void modi(int arr[], int s){
    cout<<endl<<"Modifing"<<endl;
    for (int i = 0; i<s; i++){
        arr[i] += 10;
    }
}