#include <iostream>

using namespace std;

class Car{

    string make, model;
    int year;


    public:
    Car(string make, string model, int year): make(make), model(model), year(year){};

    void getMake(){
        cout<<"Make = "<<make<<endl;
    }
    void getModel(){cout<<"Model = "<<model<<endl;}

    void getYear(){cout<<"Year = "<<year;}
};

int main() {
    Car c("Gaya bhusa", "Yadavji", 1857);
    c.getMake();
    c.getModel();
    c.getYear();
    return 0;
}