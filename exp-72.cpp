#include <iostream>
#include <fstream>
using namespace std;
int main(){
  fstream file("data.txt", ios::in | ios::out | ios::app);
  if(!file) return 1;
  file<<"Hello\n";
  file.seekg(0);
  string line;
  while(getline(file,line)){
    cout<<line<<endl;
  }
  file.close();
  return 0;
}