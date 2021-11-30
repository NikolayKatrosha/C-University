
#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	if (((a + b + c) % 3) != 0) cout << ("IMPOSSIBLE");
	else {
		int s = (a + b + c) / 3;
		int d = 0;
		if (a > s) d += a - s;
		if (b > s) d += b - s;
		if (c > s) d += c - s;
		cout << d;
	}
}
