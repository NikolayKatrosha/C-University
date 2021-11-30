#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        int k = i + 1;
        while (k < s.size()) {
            if (s[i] == s[k] and k != i) {
                s.erase(k, 1);
            }
            else k++;
        }
    }
    cout << s.size();
    return 0;
}
