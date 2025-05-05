#include <iostream>
#include <fstream>
using namespace std;
int main(int argc,char* argv[]){
  if(argc!=2) return 1;
  ifstream in;
  ofstream out;
  if(string(argv[1])=="compress"){
    in.open("input.txt",ios::binary);
    out.open("compressed.bin",ios::binary);
    char prev=0,c;
    int count=0;
    while(in.get(c)){
      if(c==prev&&count<255){
        count++;
      }else{
        if(count>0){
          out.put(count);
          out.put(prev);
        }
        prev=c;
        count=1;
      }
    }
    if(count>0){
      out.put(count);
      out.put(prev);
    }
    in.close();
    out.close();
  }else if(string(argv[1])=="decompress"){
    in.open("compressed.bin",ios::binary);
    out.open("output.txt",ios::binary);
    char count,c;
    while(in.get(count)&&in.get(c)){
      for(int i=0;i<(unsigned char)count;i++) out.put(c);
    }
    in.close();
    out.close();
  }else{
    return 1;
  }
  return 0;
}
