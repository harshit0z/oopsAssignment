#include <iostream>
using namespace std;

class Account {
protected:
    double balance;
public:
    Account(double b=0):balance(b){}
    virtual void deposit(double a){ balance+=a; }
    virtual void withdraw(double a) {
        if(a<=balance) balance-=a;
        else cout<<"Insufficient balance\n";
    }
    virtual void display() {
        cout<<"Balance: "<<balance<<endl;
    }
    virtual ~Account(){}
};

class Savings: public Account {
    double interestRate;
public:
    Savings(double b=0,double r=0.05):Account(b),interestRate(r){}
    void applyInterest() {
        balance+=balance*interestRate;
    }
    void display() override {
        cout<<"Savings account balance: "<<balance<<endl;
    }
};

class Current: public Account {
public:
    Current(double b=0):Account(b){}
    void display() override {
        cout<<"Current account balance: "<<balance<<endl;
    }
};

int main(){
    Account* acc = nullptr;
    int choice;
    do{
        cout<<"1. Savings\n2. Current\n3. Exit\nChoose account type: ";
        cin>>choice;
        if(choice==1) acc = new Savings();
        else if(choice==2) acc = new Current();
        else break;

        int op;
        do{
            cout<<"1. Deposit\n2. Withdraw\n3. Display\n4. Exit\nChoose operation: ";
            cin>>op;
            if(op==1){
                double amt; cin>>amt; acc->deposit(amt);
            }
            else if(op==2){
                double amt; cin>>amt; acc->withdraw(amt);
            }
            else if(op==3){
                acc->display();
                if(choice==1) ((Savings*)acc)->applyInterest();
            }
        }while(op!=4);
        delete acc;
        acc=nullptr;
    }while(choice!=3);
    return 0;
}