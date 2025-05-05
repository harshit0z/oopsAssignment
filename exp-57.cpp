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

    void getYear(){cout<<"Year = "<<year<<endl;}
};

int main() {
    Car c1("Gaya bhusa", "Yadavji", 1857), c2("Gaya bhusa 2.0", "bade Yadavji", 1947);

    Car arr[2] = {c1, c2 };

    for (int i = 0; i<2; i++){
        arr[i].getMake();
        arr[i].getModel();
        arr[i].getYear();
    }
    
    return 0;
}