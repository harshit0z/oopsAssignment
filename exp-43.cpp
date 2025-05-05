#include <iostream>

using namespace std;

void print(int a){cout<<a<<endl;}
void print(string a){cout<<a<<endl;}
void print(double a){cout<<a<<endl;}

int main() {

    print(5);
    print(5.5);
    print("Nikhil");
    
    return 0;
}