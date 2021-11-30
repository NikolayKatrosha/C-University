
#include <iostream>
using namespace std;

int main() {
	double a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((a == b) and (c == d)) cout << "YES";
	else if ((a == c) and (b == d)) cout << "YES";
	else if ((a == d) and (b == c)) cout << "YES";
	else cout << "NO";
}
