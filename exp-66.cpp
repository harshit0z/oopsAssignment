#include <iostream>

using namespace std;

class Media{

    public:
        virtual void show(){cout<<"Media class"<<endl;} 
};

class DVD: public Media{
    public:
        void show() override{cout<<"DVD class"<<endl;}
};
class Book:public Media{
    public :
        void show() override{cout<<"Book class"<<endl;}
};

int main() {
    Media *m;
    m->show();
    m = new Book();
    m->show();
    m = new DVD();
    m->show();
    return 0;
}