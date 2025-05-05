#include <iostream>
using namespace std;

class Book {
    string title, author;
    int year;
public:
    Book(string t, string a, int y) : title(t), author(a), year(y) {}
    void show() { cout<<title<<" "<<author<<" "<<year<<endl; }
};

int main() {
    Book b("Godan", "Munshi Premchand", 1935);
    b.show();
    return 0;
}