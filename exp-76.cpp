#include <iostream>
using namespace std;

class Distance {
    int feet, inches;
public:
    Distance(int f=0,int i=0):feet(f),inches(i){}
    friend Distance add(Distance&, Distance&);
    void show(){cout<<feet<<"'"<<inches<<"\""<<endl;}
};

Distance add(Distance& d1, Distance& d2){
    int f=d1.feet+d2.feet;
    int i=d1.inches+d2.inches;
    if(i>=12){f+=i/12; i=i%12;}
    return Distance(f,i);
}

int main(){
    Distance d1(5,8), d2(3,11), d3;
    d3=add(d1,d2);
    d3.show();
    return 0;
}