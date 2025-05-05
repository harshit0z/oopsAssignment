#include <iostream>
using namespace std;

class Account {
    int balance;
public:
    Account(int b=0):balance(b){}
    void setBalance(int b){ balance=b; }
    int getBalance(){ return balance; }
};

int main(){
    Account a;
    a.setBalance(1000);
    cout<<a.getBalance()<<endl;
    return 0;
}