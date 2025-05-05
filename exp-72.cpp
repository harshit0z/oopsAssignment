#include <iostream>
using namespace std;

class Date {
    int day, month, year;
public:
    Date(int d=0,int m=0,int y=0):day(d),month(m),year(y){}
    bool operator==(const Date& other) {
        return day==other.day && month==other.month && year==other.year;
    }
    void show(){cout<<day<<"/"<<month<<"/"<<year<<endl;}
};

int main(){
    Date d1(1,1,2020), d2(1,1,2020), d3(2,2,2021);
    cout<<(d1==d2)<<endl;
    cout<<(d1==d3)<<endl;
    return 0;
}