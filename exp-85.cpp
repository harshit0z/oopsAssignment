#include <iostream>
using namespace std;

class Library {
private:
    int privateData;
protected:
    int protectedData;
public:
    int publicData;
    Library() { privateData=1; protectedData=2; publicData=3; }
    void showAll() {
        cout<<privateData<<" "<<protectedData<<" "<<publicData<<endl;
    }
};

class Derived: public Library {
public:
    void access() {
        cout<<protectedData<<endl;
        cout<<publicData<<endl;
    }
};

int main(){
    Library lib;
    cout<<lib.publicData<<endl;
    lib.showAll();

    Derived d;
    d.access();

    return 0;
}