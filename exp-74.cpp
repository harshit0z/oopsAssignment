#include <iostream>
#include <cstdio>
using namespace std;
int main(){
  rename("oldfile.txt","newfile.txt");
  remove("newfile.txt");
  return 0;
}