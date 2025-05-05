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


class Student:public Person{
    int studentId;
    public:
    void setId(int id ){
        this->studentId = id;
    }
    void getId(){cout<<"Student id = "<<studentId<<endl;}
};

int main() {
    Student s;
    s.setName("Nikhil");
    s.setAge(1000);
    s.setId(123);

    s.getName();
    s.getAge();
    s.getId();

    return 0;
}