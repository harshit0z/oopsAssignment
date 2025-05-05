#include <iostream>

using namespace std;

class FileHandler {
    string file;
public:
    FileHandler(string filename) { cout<<"Opend "<<filename<<endl; file=filename;}
    ~FileHandler() { cout<<"Closed "<<file<<endl;  }
};

int main() {
    FileHandler fh("test.txt");
    
    return 0;
}