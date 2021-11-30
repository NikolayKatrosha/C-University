#include <iostream>
using namespace std;
int main() {
	int** x, n, m, g;
	int a;
	cin >> a;
	cin >> n;
	g = n;
	m = g;
	int k = 0;
	x = new int* [n];
	for (int i = 0; i < n; i++) {
		x[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> x[i][j];
				}
	}
	for (int j = 0; j <n; j++) {
		for (int i = 0; i < n; i++) {
			if (x[i][j] == a) {
				k++;
			}
		}
			if (k > 0) {
				cout << "YES" << endl;
			}
			if(k==0) {
				cout << "NO" << endl;
			}
			k = 0;
	}
}