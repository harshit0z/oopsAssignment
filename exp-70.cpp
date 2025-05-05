#include <iostream>

using namespace std;

class Payment{

    public:
        virtual void processPayment()=0;

};

class CreditCardPayment: public Payment{
    public :
    void processPayment() override{cout<<"Processing CreditCardPayment"<<endl;}
};

class DebitCardPayment: public Payment{
    public :
        void processPayment() override{cout<<"Processing CreditCardPayment"<<endl;}
};

int main() {
    Payment *p = new CreditCardPayment();
    p->processPayment();
    p = new DebitCardPayment();
    p->processPayment();  
    return 0;
}