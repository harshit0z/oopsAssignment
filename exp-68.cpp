#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream in("file.txt");
  ofstream out("output.txt");
  char c;
  while(in.get(c)){
    out.put(c);
  }
  in.close();
  out.close();
  return 0;
}