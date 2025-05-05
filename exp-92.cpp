#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  ifstream in("file.txt");
  string word, target;
  int count=0;
  cin>>target;
  while(in>>word){
    if(word==target) count++;
  }
  in.close();
  cout<<count;
  return 0;
}