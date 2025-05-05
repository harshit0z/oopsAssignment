#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    ofstream out("file.txt");
    string s;
    while (getline(cin, s))
    {
        cout<<"Enter something"<< endl;

        if (s == "")
            break;
        out << s << endl;
    }
    out.close();
    return 0;
}