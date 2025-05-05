#include <iostream>
#include <fstream>
using namespace std;
struct Record{
  int id;
  char name[20];
};
int main(){
  fstream file("records.bin", ios::in | ios::out | ios::binary | ios::trunc);
  Record r1 = {1, "Kutta"};
  Record r2 = {2, "billa"};
  Record r3 = {3, "bakri"};
  file.write((char*)&r1, sizeof(r1));
  file.write((char*)&r2, sizeof(r2));
  file.write((char*)&r3, sizeof(r3));

  Record r;
  file.seekg(sizeof(Record));
  file.read((char*)&r, sizeof(r));
  if(r.id==2){
    r.id=20;
    file.seekp(sizeof(Record));
    file.write((char*)&r, sizeof(r));
  }

  file.seekg(0);
  while(file.read((char*)&r, sizeof(r))){
    cout<<r.id<<' '<<r.name<<endl;
  }
  file.close();
  return 0;
}