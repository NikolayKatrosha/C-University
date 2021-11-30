#include <iostream>
using namespace std;

int main() {
    int l, w, h;
    int a;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> l >> w >> h;
        int d = 16;
        int s = ((l + w) * 2 * h);
        if (s % d == 0) cout << s / d << endl;
        else cout << (s / d) + 1 << endl;
    }
}
