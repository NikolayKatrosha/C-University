
#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	if ((a > 0) and (a < 4)) cout << "Initial";
	else if ((a >= 4) and (a < 7)) cout << "Average";
	else if ((a >= 7) and (a <= 9)) cout << "Sufficient";
	else if ((a >= 10) and (a <= 12)) cout << "High";

}
