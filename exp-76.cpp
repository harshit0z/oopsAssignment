#include <iostream>
using namespace std;

class Resource {
public:
    Resource() { cout<<"Resource acquired\n"; }
    ~Resource() { cout<<"Resource released\n"; }
};

void func(bool throwError) {
    Resource r;
    try {
        cout<<"Inside try block\n";
        if(throwError) throw runtime_error("Exception thrown");
        cout<<"No exception\n";
    } catch(exception& e) {
        cout<<"Caught: "<<e.what()<<endl;
        // No finally block here, but destructor will act like finally
    }
}

int main() {
    func(false);
    cout<<"---\n";
    func(true);
    return 0;
}