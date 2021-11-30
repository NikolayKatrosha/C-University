
#include <iostream>
using namespace std;
//void f(int* x, int n) {
//    for (int i = 0; i < n; ++i) {
//        double sum = 0;
//        sum += x[n];
//    }

int main() {
    int n;
    int* r;
    cin >> n;
    double sum = 0;
     r = new int [n];
    for (int i = 0; i < n; ++i) {
        sum += r[i];
    }
    cout << sum;
    delete[]r;
}
