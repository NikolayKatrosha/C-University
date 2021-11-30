
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
	int a;
	double max = -100;

	cin >> a;
	for (int i = 0; i < a; i++) {
		double b;
		cin >> b;
		b = abs(b);
		if (b > max) max = b;

	}
	cout << fixed << setprecision(2) << max;
}
