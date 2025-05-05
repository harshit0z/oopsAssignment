#include <iostream>

using namespace std;

class Employee{

    public:
        virtual void work() = 0;
};

class Manager:public Employee{
    public :
    void work() override{
        cout<<"Manager is chilling"<<endl;
    }
};

class Worker: public Employee{
    public:
        void work() override{
            cout<<"Worker is working for dihadi";
        }
};

int main() {
    Manager m;
    Worker w;

    m.work();
    w.work();
    return 0;
}