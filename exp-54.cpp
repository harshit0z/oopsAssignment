#include <iostream>

using namespace std;


int main() {
    int arr[5] = {0,1,2,3,4};
    int *p = arr;  
    
    for (int i = 0; i<5; i++){
        cout<<*p<<endl;
        p++;
    }
    return 0;
}