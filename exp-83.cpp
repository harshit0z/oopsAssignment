#include <iostream>
#include <fstream>
using namespace std;
struct Data{
  int id;
  double val;
};
int main(){
  fstream file("data.bin", ios::in | ios::out | ios::binary | ios::trunc);
  Data d1 = {1,1.1}, d2 = {2,2.2}, d3 = {3,3.3};
  file.write((char*)&d1, sizeof(d1));
  file.write((char*)&d2, sizeof(d2));
  file.write((char*)&d3, sizeof(d3));

  Data temp;
  file.seekg(sizeof(Data));
  file.read((char*)&temp, sizeof(temp));
  cout<<temp.id<<' '<<temp.val<<'\n';

  temp.val = 9.9;
  file.seekp(sizeof(Data));
  file.write((char*)&temp, sizeof(temp));

  file.seekg(sizeof(Data));
  file.read((char*)&temp, sizeof(temp));
  cout<<temp.id<<' '<<temp.val<<'\n';

  file.close();
  return 0;
}