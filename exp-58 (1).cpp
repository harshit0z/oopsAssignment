#include <iostream>

using namespace std;

class BankAccount{
    int acc, bal=0;
    public:
        void setAcc(int acc) {
            this->acc = acc;
        }
        void deposite(int m){
            cout<<"Depositing $"<<m<<endl;
            this->bal += m;
            cout<<"Current Balance = $"<<this->bal<<endl;
        }

        void withDraw(int m){
            cout<<"Withdrawing $"<<m<<endl;
            this-> bal-= m;
            cout<<"Current Balance = $"<<this->bal<<endl;
        }
};

int main() {
    BankAccount b;
    b.setAcc(123);
    b.deposite(500);
    b.withDraw(200);
    return 0;
}