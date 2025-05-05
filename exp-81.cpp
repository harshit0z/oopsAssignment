#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.txt");
  out<<"old data\n";
  out.close();

  ofstream out2("file.txt", ios::trunc);
  out2<<"new data\n";
  out2.close();

  ifstream in("file.txt");
  string s;
  while(getline(in,s)){
    cout<<s<<endl;
  }
  in.close();
  return 0;
}