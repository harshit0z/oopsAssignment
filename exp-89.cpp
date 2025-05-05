#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream log("error.log", ios::app);
  if(!log) return 1;
  log<<"Error: Something went wrong\n";
  log.close();
  return 0;
}