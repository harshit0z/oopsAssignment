#include <iostream>
using namespace std;

class Cache {
    static const int size = 10;
    int keys[size];
    int values[size];
    int count;
public:
    Cache():count(0) {}
    void store(int key, int value) {
        for(int i=0;i<count;i++){
            if(keys[i]==key){
                values[i]=value;
                return;
            }
        }
        if(count<size){
            keys[count]=key;
            values[count++]=value;
        }
    }
    int retrieve(int key) {
        for(int i=0;i<count;i++){
            if(keys[i]==key) return values[i];
        }
        return -1;
    }
};

int main(){
    Cache c;
    c.store(1,100);
    c.store(2,200);
    cout<<c.retrieve(1)<<endl;
    cout<<c.retrieve(3)<<endl;
    c.store(1,150);
    cout<<c.retrieve(1)<<endl;
    return 0;
}