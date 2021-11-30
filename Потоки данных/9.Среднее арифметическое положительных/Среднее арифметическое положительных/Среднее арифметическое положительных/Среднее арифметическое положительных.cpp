
#include <iostream>
#include<iomanip>
using namespace std;

int main() {
	int a;
	double k = 0;
	int d = 0;
	double b;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b > 0) {
			k += b; 
			d++;
		}		
	}
	if ( k > 0) { 
		cout << fixed << setprecision(2) << k / d; 
	}
	else{
		cout << "Not Found";	
	}
	return 0;
}

