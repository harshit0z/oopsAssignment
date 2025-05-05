#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.bin", ios::binary);
  int x=12345;
  out.write((char*)&x, sizeof(x));
  out.close();

  ifstream in("file.bin", ios::binary);
  int y=0;
  in.read((char*)&y, sizeof(y));
  cout<<y;
  in.close();

  return 0;
}