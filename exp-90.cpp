#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  ofstream out("editor.txt");
  string line;
  while(true){
    getline(cin,line);
    if(line=="EXIT") break;
    out<<line<<endl;
  }
  out.close();
  ifstream in("editor.txt");
  while(getline(in,line)){
    cout<<line<<endl;
  }
  in.close();
  return 0;
}