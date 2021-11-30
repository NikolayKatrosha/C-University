#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a;
	double b;
	double s = 0;
	int k = 0;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> b;
		if (b < 0) k+=1;
		if (b < 0) s += b;
	}
	cout << k << " " << fixed<<setprecision(2)<< s;
}
