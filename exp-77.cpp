#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.txt");
  out<<"abcdef";
  out.seekp(2);
  out.put('X');
  cout<<out.tellp();
  out.close();
  return 0;
}