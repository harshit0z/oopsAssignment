#include <iostream>

using namespace std;

class Employee{
    string name, pos;
    int sal;
    public:
    Employee(string name, string pos, int sal): name(name), pos(pos), sal(sal){};

    void get(){
        cout<<"Name = "<<name<<endl
        <<"Position = "<<pos<<endl
        <<"Salary = "<<sal<<endl;
    }

};

int main() {
    Employee e("Nikhil", "Dalal", 400000000);
    e.get();
    return 0;
}