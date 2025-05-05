#include <iostream>
#include <string>
using namespace std;

class BigNumber {
    string num;
public:
    BigNumber(string s):num(s){}
    BigNumber add(const BigNumber& b) {
        string a=num, c=b.num;
        string res="";
        int i=a.size()-1, j=c.size()-1, carry=0;
        while(i>=0 || j>=0 || carry){
            int x = i>=0 ? a[i--]-'0' : 0;
            int y = j>=0 ? c[j--]-'0' : 0;
            int sum = x+y+carry;
            carry = sum/10;
            res = char(sum%10+'0')+res;
        }
        return BigNumber(res);
    }
    void show(){ cout<<num<<endl; }
};

int main(){
    BigNumber b1("9999999999999999999999999"), b2("1");
    BigNumber b3 = b1.add(b2);
    b3.show();
    return 0;
}