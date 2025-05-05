#include <iostream>
#include <fstream>
using namespace std;
int main(){
  ofstream out("result.txt");
  int n, sum=0;
  while(cin>>n){
    if(n<0) break;
    sum+=n;
  }
  out<<sum;
  out.close();
  return 0;
}