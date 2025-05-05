#include <iostream>
#include <iomanip>
using namespace std;
int main(){
  double currency = 1234.5678;
  double percentage = 0.8567;

  cout << fixed << setprecision(2);
  cout << "$" << currency << endl;
  cout << setprecision(1) << (percentage * 100) << "%" << endl;

  return 0;
}