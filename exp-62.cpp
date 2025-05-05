#include <iostream>

using namespace std;

class Counter{

    public:
        void comp(Counter *o){
            if(this == o){cout<<"Same object"<<endl;}
            else{cout<<"Different Objects";}
        }
};

int main() {
    Counter c1, c2;
    c1.comp(&c1);
    c1.comp(&c2);
    return 0;
}