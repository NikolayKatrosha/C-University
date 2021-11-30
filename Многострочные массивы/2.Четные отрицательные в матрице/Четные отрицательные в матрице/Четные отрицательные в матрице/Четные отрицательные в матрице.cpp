#include <iostream>
using namespace std;

int main()
{
	int** x, n, m, g;
	cin >> n;
	g= n;
	m = g;
	int k = 0;
	int sum = 0;
	x = new int* [n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
			if ((x[i][j] % 2 == 0) and ((x[i][j]) < 0)) {
					k++;
					sum += x[i][j];
			}
		}
	}
	cout << k << " " << sum;
}
