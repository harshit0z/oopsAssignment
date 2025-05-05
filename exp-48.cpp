#include <iostream>

using namespace std;
int add(int a, int b) {return a+b;}
int sub(int a, int b){return a-b;}

int main() {
    int (*func[2])(int, int) = {add, sub};

    int a,b;
    int choice = 0;
    cout<<"Enter the Numbers "<<endl;
	cin>>a>>b;
    cout<<"Enter the operation"<<endl<<"0: Sum"<<endl<<"1: Sub"<<endl;
    cin>>choice;
    if (choice==1 || choice == 0) cout<<"Result = "<<func[choice](a,b);

    return 0;
}