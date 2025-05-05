#include <iostream>
#include <fstream>
using namespace std;

class FileCompressor {
public:
    void compress(const char* infile, const char* outfile) {
        ifstream fin(infile, ios::binary);
        ofstream fout(outfile, ios::binary);
        if(!fin || !fout) return;
        char prev=0, curr;
        int count=0;
        bool first=true;
        while(fin.get(curr)){
            if(first){
                prev=curr; count=1; first=false;
            }
            else if(curr==prev && count<255) count++;
            else{
                fout.put(count);
                fout.put(prev);
                prev=curr;
                count=1;
            }
        }
        if(!first){
            fout.put(count);
            fout.put(prev);
        }
        fin.close();
        fout.close();
    }
    void decompress(const char* infile, const char* outfile) {
        ifstream fin(infile, ios::binary);
        ofstream fout(outfile, ios::binary);
        if(!fin || !fout) return;
        char count, ch;
        while(fin.get(count).get(ch)){
            for(int i=0;i<(unsigned char)count;i++)
                fout.put(ch);
        }
        fin.close();
        fout.close();
    }
};

int main() {
    FileCompressor fc;
    fc.compress("input.txt","compressed.bin");
    fc.decompress("compressed.bin","output.txt");
    cout<<"Compression and decompression done"<<endl;
    return 0;
}