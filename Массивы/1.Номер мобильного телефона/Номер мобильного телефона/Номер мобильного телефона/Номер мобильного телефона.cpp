
#include <iostream>
using namespace std;

int main()
{
	int n[] = { 0,0,0,0,0,0,0,0,0,0 };
	int k = 0;
	char c;
	while ((c = cin.get()) != EOF) {
		n[c - 48]++;
	}
	for (int i = 0; i < 10; i++) {
		if (n[i] == 0) {
			k++;
		}
	}
	cout << k << endl;
	for (int i = 0; i < 10; i++) {
		if (n[i] == 0) {
			cout << n[i] << " ";
		}
	}
}