#include <iostream>
using namespace std;
int main() {
	int **x, n, m;
	cin >> n >> m;
	x = new int *[n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> x[i][j];
		}
	}
	cout << m << " " << n << endl;
	for (int j = 0; j < m; j++) {
		for (int i = n - 1; i >= 0; i--) {
			cout << x[i][j] << " ";
		}
		cout << endl;
	}
}
