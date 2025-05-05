#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                T temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arr1[]={5,2,9,1,5};
    double arr2[]={3.5,2.1,4.8,1.0};
    bubbleSort(arr1,5);
    bubbleSort(arr2,4);

    for(int i=0;i<5;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<4;i++) cout<<arr2[i]<<" ";
    cout<<endl;

    return 0;
}