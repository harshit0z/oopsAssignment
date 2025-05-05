#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("file.bin", ios::binary);
  int arr[] = {1,2,3,4,5};
  out.write((char*)arr, sizeof(arr));
  out.close();
  return 0;
}