#include <iostream>
using namespace std;
int main()
{
	int n;
	int k = 0;
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (x[j] > x[j + 1]) {
				int a = x[j];
				x[j] = x[j + 1];
				x[j + 1] = a;
				k++;
			}
		}
	}
	cout << k;
}