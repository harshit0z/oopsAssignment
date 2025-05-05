#include <iostream>
using namespace std;

class Student {
    static int totalStudents;
public:
    Student() { totalStudents++; }
    static int getTotalStudents() { return totalStudents; }
};

int Student::totalStudents = 0;

int main() {
    Student s1, s2, s3;
    cout<<Student::getTotalStudents()<<endl;
    return 0;
}