#include <iostream>

using namespace std;

class Person{
    string name;
    int age;

    public:
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }

    void getAge(){cout<<"Age = "<<age<<endl;}
    void getName(){cout<<"Name = "<<name<<endl;}

};

int main() {
    Person p;
    p.setAge(18);
    p.setName("Nikhil");
    p.getName();
    p.getAge();
    return 0;
}