#include <iostream>
using namespace std;

class Time {
    int hr,min,sec;
public:
    Time(int h=0,int m=0,int s=0):hr(h),min(m),sec(s){}
    void normalize() {
        min += sec / 60;
        sec = sec % 60;
        hr += min / 60;
        min = min % 60;
    }
    Time add(const Time& t) {
        Time res(hr + t.hr, min + t.min, sec + t.sec);
        res.normalize();
        return res;
    }
    Time sub(const Time& t) {
        int total1 = hr*3600 + min*60 + sec;
        int total2 = t.hr*3600 + t.min*60 + t.sec;
        int diff = total1 - total2;
        if(diff < 0) diff = -diff;
        Time res(diff / 3600, (diff % 3600) / 60, diff % 60);
        return res;
    }
    bool equal(const Time& t) {
        return hr==t.hr && min==t.min && sec==t.sec;
    }
    void show() {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
};

int main(){
    Time t1(2,45,50), t2(1,30,40);
    Time t3 = t1.add(t2);
    Time t4 = t1.sub(t2);
    t3.show();
    t4.show();
    cout<<t1.equal(t2)<<endl;
    return 0;
}