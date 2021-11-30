#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int k = 0;
    for (int i = 0; i < a; i++) {
        double b, c;
        cin >> b >> c;
        if (c < 50) {
            k += b;
        }
    }
    cout << k;
}
