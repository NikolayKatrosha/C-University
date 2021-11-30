#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n - 1; j++) {
			if (x[j] > x[j + 1]) {
				int a = x[j];
				x[j] = x[j + 1];
				x[j + 1] = a;
			}
		}
		for (int i = 0; i < n; i++) {
			cout << x[i] << " ";
		}
		cout << endl;
	}
}