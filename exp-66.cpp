#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream in("file.txt");
  string s;
  while(in>>s){
    cout<<s<<' ';
  }
  in.close();
  return 0;
}