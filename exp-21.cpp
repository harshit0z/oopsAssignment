#include <iostream>

using namespace std;



int main() {
    int intg = 5;
    double dob = static_cast<double>(intg);
    double doub = 354.5486;
    int intg2 = static_cast<int>(doub);

    cout<<"Integer = "<<intg<<endl
    <<"Double  = "<<dob<<endl
    <<"Integer = "<<intg2;
    return 0;
}