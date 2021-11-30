#include <iostream>
using namespace std;
void print(int** x, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++)
			cout << x[i][j];
		cout << endl;
	}
}

int main()
{
	int** x, n, m;
	cin >> n;
	int g;
	g = n;
	m = g;
	x = new int* [n];
	for (int k = 0; k < n; k++) {
		x[k] = new int[m];
	}
	for (int g = 0; g < n; g++) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; j++) {
				if (i + j < n - 1) {
					x[i][j] = 2;
				}
				else if (i + j == n - 1) {
					x[i][j] = 0;
				}
				else {
					x[i][j] = 1;
				}
			}
			
		}
	}
	print(x, n, m);
}