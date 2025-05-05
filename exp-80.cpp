#include <iostream>
#include <fstream>
using namespace std;
int main(){
  // Write text mode
  ofstream out1("text.txt");
  out1<<"Hello\nWorld\n";
  out1.close();

  // Write binary mode
  ofstream out2("binary.bin", ios::binary);
  const char data[] = "Hello\nWorld\n";
  out2.write(data, sizeof(data)-1);
  out2.close();

  // Read text mode
  ifstream in1("text.txt");
  char c;
  cout<<"Text mode output:"<<endl;
  while(in1.get(c)){
    cout<<c;
  }
  in1.close();

  // Read binary mode
  ifstream in2("binary.bin", ios::binary);
  cout<<"\nBinary mode output:"<<endl;
  while(in2.get(c)){
    cout<<c;
  }
  in2.close();

  return 0;
}