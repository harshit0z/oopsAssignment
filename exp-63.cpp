#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double num = 123.456789;
  cout << fixed << setprecision(2) << num << endl;
  cout << fixed << setprecision(4) << num << endl;
  cout << fixed << setprecision(6) << num << endl;
  return 0;
}