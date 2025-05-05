#include <iostream>

using namespace std;

class Rectangle{
    int w, h;
    public:
        void setParam(int w, int h){
            this->w = w;
            this->h = h;
        }

        void area(){
            cout<<"Area = "<<h*w<<endl;
        }
        void per(){
            cout<<"Perimeter = "<<2*(w+h)<<endl;
        }
};

int main() {
    Rectangle r;
    r.setParam(4, 5);
    r.area();
    r.per();
    return 0;
}