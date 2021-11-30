

#include <iostream>
using namespace std;

int main() {
	double n, m, k;
	cin >> n >> m >> k;
	cout << (ceil)(n / k) + (ceil)(m / k);
}