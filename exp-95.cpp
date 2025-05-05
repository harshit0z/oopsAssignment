#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  ofstream out("merged.txt");
  for(int i=1;i<=3;i++){
    ifstream in("file"+to_string(i)+".txt");
    string line;
    while(getline(in,line)){
      out<<line<<endl;
    }
    in.close();
  }
  out.close();
  return 0;
}