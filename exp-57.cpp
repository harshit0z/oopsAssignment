#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ifstream in("file.txt");
  int n;
  while(in>>n){
    cout<<n<<' ';
  }
  in.close();
  return 0;
}