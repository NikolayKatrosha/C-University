#include <iostream>
using namespace std;

int main()
{
	int** x, n, m, g;
	cin >> n;
	g = n;
	m = g;
	int sum = 0;
	int sum2 = 0;
	x = new int* [n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
			if (i + j == n - 1) {
				sum += x[i][j];
			}
			if (i == j) {
				sum2 += x[i][j];
			}
		}
	}
	cout << sum2 << " " << sum;
}