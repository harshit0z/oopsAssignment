#include <iostream>
#include <fstream>
using namespace std;
struct Data{
  int val;
};
int main(){
  ifstream in("data.bin", ios::binary);
  in.seekg(0, ios::end);
  int size = in.tellg();
  int count = size / sizeof(Data);
  Data d;
  for(int i=count-1; i>=0; i--){
    in.seekg(i*sizeof(Data));
    in.read((char*)&d, sizeof(d));
    cout<<d.val<<' ';
  }
  in.close();
  return 0;
}