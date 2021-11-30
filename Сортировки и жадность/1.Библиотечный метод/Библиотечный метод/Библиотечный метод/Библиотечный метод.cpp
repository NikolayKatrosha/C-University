#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	for (int i = 1; i < n; i++) {
		int k = 0;
		for (int j = i; j > 0 && x[j - 1] > x[j]; j--) {
			swap(x[j - 1], x[j]);
			k++;
		}
    }
	
}

