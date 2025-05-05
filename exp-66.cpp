#include <iostream>
using namespace std;

class Matrix {
    int rows,cols;
    int** mat;
public:
    Matrix(int r,int c):rows(r),cols(c){
        mat=new int*[rows];
        for(int i=0;i<rows;i++){
            mat[i]=new int[cols];
            for(int j=0;j<cols;j++)
                mat[i][j]=0;
        }
    }
    void show(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++)
                cout<<mat[i][j]<<" ";
            cout<<endl;
        }
    }
};

int main(){
    Matrix m(3,3);
    m.show();
    return 0;
}