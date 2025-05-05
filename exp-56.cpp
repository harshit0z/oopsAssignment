#include <iostream>
#include <fstream>
using namespace std;
int main(){
    ofstream out("file.txt");
    out<<"hello";
    out.close();
    ifstream in("file.txt");
    string s;
    in>>s;
    cout<<s<<" = s";
    in.close();
    
    
    return 0;
}