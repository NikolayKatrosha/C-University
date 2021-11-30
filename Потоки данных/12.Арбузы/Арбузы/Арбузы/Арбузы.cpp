#include <iostream>
using namespace std;
int main() {
	int a;
	int max = 0;
	int min = 30000;
	int b;
	cin >> a;
	if (a<2) {
		cout << "Ooops!";
		}
	else {
		for (int i = 0; i < a; i++) {
			cin >> b;
			if (b < min) {
				min = b;
			}
			if (b > max) {
				max = b;
			}
		}
		cout << min << " " << max;
		}
	}