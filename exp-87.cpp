#include <iostream>
#include <vector>
using namespace std;

class Polynomial {
    vector<int> coeffs;
public:
    Polynomial(vector<int> c): coeffs(c) {}
    Polynomial operator+(const Polynomial& p) {
        int n = max(coeffs.size(), p.coeffs.size());
        vector<int> res(n,0);
        for(int i=0; i<n; i++) {
            int a = i < coeffs.size() ? coeffs[i] : 0;
            int b = i < p.coeffs.size() ? p.coeffs[i] : 0;
            res[i] = a + b;
        }
        return Polynomial(res);
    }
    Polynomial operator*(const Polynomial& p) {
        int n = coeffs.size() + p.coeffs.size() - 1;
        vector<int> res(n,0);
        for(size_t i=0; i<coeffs.size(); i++)
            for(size_t j=0; j<p.coeffs.size(); j++)
                res[i+j] += coeffs[i] * p.coeffs[j];
        return Polynomial(res);
    }
    void show() {
        for(size_t i=0; i<coeffs.size(); i++) {
            cout << coeffs[i];
            if(i > 0) cout << "x^" << i;
            if(i != coeffs.size() - 1) cout << " + ";
        }
        cout << endl;
    }
};

int main() {
    Polynomial p1({1,2,3});
    Polynomial p2({3,4});
    Polynomial p3 = p1 + p2;
    Polynomial p4 = p1 * p2;
    p3.show();
    p4.show();
    return 0;
}