#include <iostream>

using namespace std;

void max(int a, int b){
    int max = a;
    if (max<b) max = b;

    cout<<"Maximum number is = "<<max<<endl;
}

void max(int a, int b, int c){
    int max = a;
    if(max<b) max = b;
    if(max<c) max = c;
    cout<<"Maximum number is = "<<max<<endl;

}


int main() {
    int a = 1, b = 2, c = 3;
    max(a, b);
    max(a,b,c);    
    return 0;
}