#include <iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream file("file.txt");
    string str;
    getline(file, str);
    cout<<"Content = "<<str;
    return 0; 
}