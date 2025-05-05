#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
using namespace std;
int main(){
  ifstream in("data.csv");
  string line;
  while(getline(in,line)){
    stringstream ss(line);
    string item;
    vector<string> row;
    while(getline(ss,item,',')){
      row.push_back(item);
    }
    for(auto &i: row) cout<<i<<' ';
    cout<<endl;
  }
  in.close();
  return 0;
}