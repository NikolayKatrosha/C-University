
#include <iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		int k = 0;
		cin >> b;
		while (!(b % k) == 0) {
			k++;
		}

	}
}
