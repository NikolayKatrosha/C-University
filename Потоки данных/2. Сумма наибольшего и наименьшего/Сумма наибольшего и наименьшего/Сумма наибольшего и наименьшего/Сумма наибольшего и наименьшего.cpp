
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	int max = -100;
	int min = 100;
	for (int i = 0; i < a; i++) {
		int b;
		cin >> b;
		if (b < min) {
			min = b;
		}
		if (b > max) {
			max = b;
		}
	}
		cout << min + max;
	} 

