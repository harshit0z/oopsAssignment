#include <iostream>
#include <fstream>
using namespace std;
int main(){
  try{
    ifstream in("nofile.txt");
    if(!in) throw runtime_error("File not found");
    string s;
    while(getline(in,s)){
      cout<<s<<endl;
    }
    in.close();
  }catch(exception& e){
    cout<<"Error: "<<e.what();
  }
  return 0;
}