
#include <iostream>
using namespace std;
int main()
{
	int a, a2, b, b2, c, c2;
	cin >> a >> a2 >> b >> b2 >> c >> c2;

	if ((c - a) * (b - a) + (b2 - a2) * (c2 - a2) == 0) cout << b + c - a << " " << b2 + c2 - a2;

	else if ((b - a) * (c - b) + (c2 - b2) * (b2 - a2) == 0) cout << a + c - b << " " << a2 + c2 - b2;

	else if ((c - a) * (c - b) + (c2 - b2) * (c2 - a2) == 0) cout << a + b - c << " " << a2 + b2 - c2;
} 