#include <iostream>
using namespace std;
int main()
{
	int  const n = 10;
	int x[n];
	char c;
	int k = 0;
	while ((c = cin.get()) != EOF) {
		x[c - 48]++;
	}
	for (int i = 0; i < n; i++) {
		k += x[i] / 2;
	}
	cout << k;
}
