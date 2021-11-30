#include <iostream>
using namespace std;
int main()
{
	int* x, n;
	cin >> n;
	x = new int [n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	cout << x[n - 1] << " ";
	for (int i = 0; i < n; i++) {
		if (i != n-1) {
			cout << x[i] << " ";
		}
	}
}
