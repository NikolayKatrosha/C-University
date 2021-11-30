
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b;
		cin >> b;
		if (b >= 0) cout  << b + 2 << " ";
		else  cout  << b * 1 << " ";
	}
}
