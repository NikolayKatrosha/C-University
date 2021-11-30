
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (sqrt(a * a) - (sqrt(b * b + c * c)) == 0) cout << "YES";
	else if (sqrt(b * b) - (sqrt(a * a + c * c)) == 0) cout << "YES";
	else if (sqrt(c * c) - (sqrt(b * b + a * a)) == 0) cout << "YES";
	else cout << "NO";
}