
	#include <iostream>
	using namespace std;

	int main() {
		int a;
		cin >> a;
		if (a / 100 % 10 > 0) cout << a / 100 % 10 << a / 10 % 10;
		if (a / 100 % 10 == 0) cout << a / 10 % 10;
 
	}