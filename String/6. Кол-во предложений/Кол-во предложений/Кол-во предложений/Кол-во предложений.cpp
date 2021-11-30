#include <iostream>

using namespace std;
int main()
{
	string s;
	int k = 0;
char a,b,c;
a = '.';
b = '!';
c = '?';
while (cin >> s) {
	for (int i = 0; i < s.length(); i++) {
		if ((s[i] == a) or (s[i] == b) or (s[i] == c)) {
			if ((s[i + 1] != a) and (s[i + 1] != b) and (s[i + 1] != c)) {
				k++;
			}
		}
	}
}
	cout << k;
}
