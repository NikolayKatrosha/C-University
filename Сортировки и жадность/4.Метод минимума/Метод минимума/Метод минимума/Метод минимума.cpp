#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n;
	cin >> n;
	int pos = 0;
	int* x = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> x[i];
	}
	int min = x[0];
	for (int i = 0; i < n - 1; i++) {
		int posMin = i;
		for (int j = i + 1; j < n - 1; j++) {
			if (x[j] < x[posMin]) {
				posMin = j;
			}
		}

		if (x[i]=min && x[posMin]!=x[i]) {
			swap(x[i], x[posMin]);
			pos++;
		}
		
	}
	
	cout << pos;
}