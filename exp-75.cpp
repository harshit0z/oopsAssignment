#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.txt");
  out.close();
  ifstream in("file.txt");
  in.close();
  return 0;
}