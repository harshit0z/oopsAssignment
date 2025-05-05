#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
  ifstream in("config.txt");
  if(!in) return 1;
  string line, key, value;
  bool display=false;
  int count=1;
  while(getline(in,line)){
    size_t pos=line.find('=');
    if(pos==string::npos) continue;
    key=line.substr(0,pos);
    value=line.substr(pos+1);
    if(key=="display") display=(value=="true");
    else if(key=="count") count=stoi(value);
  }
  in.close();
  if(display){
    for(int i=0;i<count;i++){
      cout<<"Hello from config"<<endl;
    }
  }
  return 0;
}