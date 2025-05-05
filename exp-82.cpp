#include <iostream>
#include <fstream>
using namespace std;
struct Data{
  int a;
  double b;
};
int main(){
  Data d1 = {10, 3.14};
  ofstream out("data.bin", ios::binary);
  out.write((char*)&d1, sizeof(d1));
  out.close();

  Data d2;
  ifstream in("data.bin", ios::binary);
  in.read((char*)&d2, sizeof(d2));
  in.close();

  cout<<d2.a<<' '<<d2.b;
  return 0;
}