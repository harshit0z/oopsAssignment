#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream in("file.txt");
  in.seekg(0, ios::end);
  int size = in.tellg();
  in.seekg(0, ios::beg);
  char c;
  in.get(c);
  cout<<c<<' '<<size;
  in.close();
  return 0;
}