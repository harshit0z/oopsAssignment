#include <iostream>
using namespace std;

class InvalidAgeException {
public:
    const char* what() { return "Invalid age entered"; }
};

int main() {
    int age;
    cout<<"Enter age:";
    cin>>age;
    try {
        if(age<0 || age>150) throw InvalidAgeException();
        cout<<"Age is "<<age<<endl;
    } catch(InvalidAgeException& e) {
        cout<<e.what()<<endl;
    }
    return 0;
}