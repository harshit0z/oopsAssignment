#include <iostream>
using namespace std;

template <typename T>
void addMatrices(T** A, T** B, T** C, int rows, int cols) {
    for(int i=0; i<rows; i++)
        for(int j=0; j<cols; j++)
            C[i][j] = A[i][j] + B[i][j];
}

template <typename T>
void multiplyMatrices(T** A, T** B, T** C, int r1, int c1, int c2) {
    for(int i=0; i<r1; i++)
        for(int j=0; j<c2; j++) {
            C[i][j] = 0;
            for(int k=0; k<c1; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
}

template <typename T>
void printMatrix(T** M, int rows, int cols) {
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++)
            cout<<M[i][j]<<" ";
        cout<<endl;
    }
}

int main() {
    int r1=2,c1=3,c2=2;

    int** A = new int*[r1];
    int** B = new int*[c1];
    int** C = new int*[r1];
    int** D = new int*[r1];

    for(int i=0; i<r1; i++) {
        A[i] = new int[c1];
        C[i] = new int[c1];
        D[i] = new int[c2];
    }
    for(int i=0; i<c1; i++)
        B[i] = new int[c2];

    // Initialize A
    int cnt = 1;
    for(int i=0;i<r1;i++)
        for(int j=0;j<c1;j++)
            A[i][j]=cnt++;

    // Initialize B
    cnt=1;
    for(int i=0;i<c1;i++)
        for(int j=0;j<c2;j++)
            B[i][j]=cnt++;

    addMatrices(A,A,C,r1,c1);
    cout<<"Sum of A and A:"<<endl;
    printMatrix(C,r1,c1);

    multiplyMatrices(A,B,D,r1,c1,c2);
    cout<<"Product of A and B:"<<endl;
    printMatrix(D,r1,c2);

    // free memory
    for(int i=0;i<r1;i++){
        delete[] A[i];
        delete[] C[i];
        delete[] D[i];
    }
    delete[] A;
    delete[] C;
    delete[] D;

    for(int i=0;i<c1;i++)
        delete[] B[i];
    delete[] B;

    return 0;
}