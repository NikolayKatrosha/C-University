#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int k = 0;
    int g = 0;
    string c = "-";
    while (cin >> s) {
        if (c.compare(s) == 0) g++;

        k++;
    }
    cout << k;
}