#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  string name;
  int age;
  double salary;
  cout<<"Enter Name  age and salary one by one"<<endl;
  cin>>name>>age>>salary;
  cout<<left<<setw(10)<<name<<setw(5)<<age<<fixed<<setprecision(2)<<salary;
  return 0;
}