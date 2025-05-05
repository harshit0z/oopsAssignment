#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  ofstream file("strings.txt");
  string s;
  for(int i=0;i<3;i++){
    cin>>s;
    file<<s<<endl;
  }
  file.close();
  return 0;
}