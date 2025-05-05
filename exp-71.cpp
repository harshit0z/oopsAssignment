#include <iostream>
using namespace std;

class Fraction {
    int num, den;
public:
    Fraction(int n=0, int d=1):num(n), den(d){}
    friend ostream& operator<<(ostream& out, const Fraction& f);
    friend istream& operator>>(istream& in, Fraction& f);
};

ostream& operator<<(ostream& out, const Fraction& f) {
    out<<f.num<<"/"<<f.den;
    return out;
}

istream& operator>>(istream& in, Fraction& f) {
    char sep;
    in>>f.num>>sep>>f.den;
    return in;
}

int main() {
    Fraction f;
    cout<<"Enter fraction (num/den):";
    cin>>f;
    cout<<"You entered: "<<f<<endl;
    return 0;
}