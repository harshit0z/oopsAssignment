#include <iostream>
#include <fstream>
using namespace std;

int main(){
    try {
        ifstream fin("input.txt");
        if(!fin) throw "File not found";
        string line;
        while(getline(fin,line)){
            cout<<line<<endl;
        }
        fin.close();
    }
    catch(const char* msg){
        cout<<"Error: "<<msg<<endl;
    }
    return 0;
}