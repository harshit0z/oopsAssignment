#include <iostream>

using namespace std;

class Student{
    public :
        string name;
        Student(string name):name(name){};

};

int main() {
    Student *p = new Student("Nikhil");
    cout<<p->name;
    
    return 0;
}