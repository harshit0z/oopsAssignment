#include <iostream>

int main() {
    int intValue = 97; 
    char charValue = reinterpret_cast<char&>(intValue);

    std::cout<<"Int =  "<<intValue<<std::endl;
    std::cout<<"Char = "<<charValue<<std::endl;

    return 0;
}