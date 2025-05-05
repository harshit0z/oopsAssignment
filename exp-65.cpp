#include <iostream>

using namespace std;

class Account{

    public:
        virtual void calculateInterest() = 0; 
};

class SavingsAccount: public Account{
    public:
        void calculateInterest() override{
            cout<<"Interestd of SavingsAccount = 354.05"<<endl;
        }
};

class CurrentAccount: public Account{
    public:
        void calculateInterest() override{
            cout<<"Interest of CurrentAccount = 687.41"<<endl;
        }
};


int main() {
    Account *a = new SavingsAccount();
    a->calculateInterest();
    a = new CurrentAccount();
    a->calculateInterest();

    delete a;
    return 0;
}