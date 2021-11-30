#include <iostream>
using namespace std;

int main() {
    int* x, n;
    cin >> n;
    x = new int[n];
    int k = 0;
    int a = 0;
    double avarage;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    for (int i = 0; i < n; ++i) {
        sum += x[i];
        avarage = sum / n;
    }
        for (int i = 0; i < n; ++i) {
            if (x[i] > avarage) {
                
                k += x[i];
                a++;
            }
        }
    cout << k << " " << a;
}