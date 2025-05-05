#include <iostream>
#include <cmath> 
using namespace std;



int main(){
    int arr[11] = {6845,54,54,541,54,54,5521,24,1522,10,14470};
    int min = arr[0];
    for (int i = 0 ; i<sizeof(arr)/sizeof(int); i++) if (min>arr[i]) min = arr[i];
    
    cout<<min;

    return 0;
}