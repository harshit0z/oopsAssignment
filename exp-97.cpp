#include <iostream>
#include <fstream>
using namespace std;
int main(){
  char c;
  ifstream in("input.txt");
  ofstream out("encrypted.txt");
  while(in.get(c)){
    out.put(c+1);
  }
  in.close();
  out.close();

  ifstream in2("encrypted.txt");
  ofstream out2("decrypted.txt");
  while(in2.get(c)){
    out2.put(c-1);
  }
  in2.close();
  out2.close();

  return 0;
}