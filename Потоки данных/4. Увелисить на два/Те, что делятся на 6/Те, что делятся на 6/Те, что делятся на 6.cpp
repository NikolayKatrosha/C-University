
#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    int n = 0;
    int c = 0;
    for (int i = 0; i < a; i++) {
        int b;
        cin >> b;
        if ((b % 6 == 0) and (b > 0)) {
            n++;
            c += b;
        }
    }
    cout << n << " " << c;
}

