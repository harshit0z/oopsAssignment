#include <iostream>

using namespace std;

class Book{

    public:
        int id;
};

int main() {
    Book *b ;
    Book arr[5];

    for(int i = 0; i<5; i++){
        b = new Book();
        b->id = i;
        arr[i] = *b;
    }

    for(int i = 0; i<5; i++){
        cout<<arr[i].id<<endl;
    }

    return 0;
}