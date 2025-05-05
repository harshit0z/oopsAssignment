#include <iostream>
using namespace std;



int main(){
    string str= "nikhil";
    int vow=0, con=0;

    for (int i = 0 ; i<str.size(); i++){
        if (str[i] == 'a' || str[i] == 'e'|| str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            vow++;
            continue;
        }
        con++;
    }

    cout<<"Vowels = "<<vow<<endl<<"consonants = "<<con;
    return 0;
}