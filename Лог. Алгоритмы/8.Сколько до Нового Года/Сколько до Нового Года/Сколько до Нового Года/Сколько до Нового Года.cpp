
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a;
	cin >> a;
	cout << a/ 86400 << " " << (a % 86400) / 3600 << " " << ((a% 86400) % 3600) / 60 << " " << a% 60;
	return 0;
}
