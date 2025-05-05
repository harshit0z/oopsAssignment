#include <iostream>
#include <fstream>
using namespace std;
struct Data{
  int id;
  double value;
  char name[20];
};
int main(){
  Data d1 = {1, 3.14, "sample"};
  ofstream out("data.bin", ios::binary);
  out.write((char*)&d1, sizeof(d1));
  out.close();
  Data d2;
  ifstream in("data.bin", ios::binary);
  in.read((char*)&d2, sizeof(d2));
  in.close();
  cout<<d2.id<<' '<<d2.value<<' '<<d2.name;
  return 0;
}
