#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream in("file.bin", ios::binary);
  char buffer[1024];
  in.read(buffer, sizeof(buffer));
  int bytes = in.gcount();
  for(int i=0; i<bytes; i++){
    cout<<hex<<(int)(unsigned char)buffer[i]<<" ";
  }
  in.close();
  return 0;
}