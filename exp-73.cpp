#include <iostream>
using namespace std;

int main(){
    try {
        int choice;
        cin >> choice;
        if(choice == 1) throw 10;
        else if(choice == 2) throw 3.14;
        else if(choice == 3) throw "Error occurred";
    }
    catch(int e) { cout << "Caught int: " << e << endl; }
    catch(double e) { cout << "Caught double: " << e << endl; }
    catch(const char* e) { cout << "Caught string: " << e << endl; }
    return 0;
}