#include <iostream>
#include <fstream>
using namespace std;
struct Data{
  int x;
  char name[20];
};
int main(){
  fstream file("data.bin", ios::in | ios::out | ios::binary | ios::trunc);
  Data d1 = {1, "Alice"};
  Data d2 = {2, "Bob"};
  file.write((char*)&d1, sizeof(d1));
  file.write((char*)&d2, sizeof(d2));
  Data d;
  file.seekg(sizeof(Data));
  file.read((char*)&d, sizeof(d));
  cout<<d.x<<' '<<d.name<<endl;
  d.x=3;
  file.seekp(sizeof(Data));
  file.write((char*)&d, sizeof(d));
  file.seekg(sizeof(Data));
  file.read((char*)&d, sizeof(d));
  cout<<d.x<<' '<<d.name<<endl;
  file.close();
  return 0;
}