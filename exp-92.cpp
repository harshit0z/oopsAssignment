#include <iostream>
using namespace std;

class SparseMatrix {
    struct Element {
        int row,col,val;
    };
    int rows, cols, count;
    Element elems[100];
public:
    SparseMatrix(int r,int c):rows(r),cols(c),count(0){}
    void addElement(int r,int c,int val){
        if(val!=0){
            elems[count].row=r;
            elems[count].col=c;
            elems[count].val=val;
            count++;
        }
    }
    SparseMatrix add(const SparseMatrix& m){
        SparseMatrix res(rows,cols);
        int i=0,j=0;
        while(i<count && j<m.count){
            Element e1=elems[i], e2=m.elems[j];
            if(e1.row<e2.row || (e1.row==e2.row && e1.col<e2.col)){
                res.addElement(e1.row,e1.col,e1.val);
                i++;
            } else if(e2.row<e1.row || (e1.row==e2.row && e2.col<e1.col)){
                res.addElement(e2.row,e2.col,e2.val);
                j++;
            } else {
                res.addElement(e1.row,e1.col,e1.val+e2.val);
                i++; j++;
            }
        }
        while(i<count){
            Element e=elems[i++];
            res.addElement(e.row,e.col,e.val);
        }
        while(j<m.count){
            Element e=m.elems[j++];
            res.addElement(e.row,e.col,e.val);
        }
        return res;
    }
    SparseMatrix mul(const SparseMatrix& m){
        SparseMatrix res(rows,m.cols);
        for(int i=0;i<count;i++){
            for(int j=0;j<m.count;j++){
                Element e1=elems[i], e2=m.elems[j];
                if(e1.col==e2.row){
                    bool found=false;
                    for(int k=0;k<res.count;k++){
                        if(res.elems[k].row==e1.row && res.elems[k].col==e2.col){
                            res.elems[k].val+=e1.val*e2.val;
                            found=true;
                            break;
                        }
                    }
                    if(!found)
                        res.addElement(e1.row,e2.col,e1.val*e2.val);
                }
            }
        }
        return res;
    }
    void show(){
        int k=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                int val=0;
                if(k<count){
                    Element e=elems[k];
                    if(e.row==i && e.col==j){ val=e.val; k++; }
                }
                cout<<val<<" ";
            }
            cout<<endl;
        }
    }
};

int main(){
    SparseMatrix m1(3,3), m2(3,3);
    m1.addElement(0,0,1);
    m1.addElement(1,1,2);
    m2.addElement(0,0,3);
    m2.addElement(1,2,4);
    SparseMatrix m3=m1.add(m2);
    m3.show();
    SparseMatrix m4=m1.mul(m2);
    m4.show();
    return 0;
}