#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  string name;
  int age;
  double salary;
  cout<<left<<setw(10)<<"Name"<<setw(5)<<"Age"<<setw(10)<<"Salary"<<endl;
  for(int i=0;i<3;i++){
    cin>>name>>age>>salary;
    cout<<left<<setw(10)<<name<<setw(5)<<age<<fixed<<setprecision(2)<<setw(10)<<salary<<endl;
  }
  return 0;
}