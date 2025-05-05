#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.txt");
  out<<"write\n";
  out.close();

  ofstream out2("file.txt", ios::app);
  out2<<"append\n";
  out2.close();

  ifstream in("file.txt");
  string s;
  while(getline(in,s)){
    cout<<s<<endl;
  }
  in.close();
  return 0;
}