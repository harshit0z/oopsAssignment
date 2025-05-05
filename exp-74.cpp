#include <iostream>
using namespace std;

class Box {
    int l,w,h;
public:
    Box(int a,int b,int c):l(a),w(b),h(c){}
    friend int volume(Box&, Box&);
};

int volume(Box& b1, Box& b2){
    return b1.l*b1.w*b1.h + b2.l*b2.w*b2.h;
}

int main(){
    Box b1(2,3,4), b2(5,6,7);
    cout<<volume(b1,b2)<<endl;
    return 0;
}