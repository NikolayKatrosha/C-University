#include <iostream>
using namespace std;
int main() {
	int* x, n;
	cin >> n;
	int max1=-100;
	int max2;
	x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		if (max1 <= x[i]) {
			max2 = max1;
			max1 = x[i];
		}
		else if (x[i] > max2) {
			max2 = x[i];
		}
	}
	cout << max1 + max2;
}