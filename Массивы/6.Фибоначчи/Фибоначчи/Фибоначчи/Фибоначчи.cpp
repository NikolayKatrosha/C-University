#include <iostream>
using namespace std;

int main()
{
	long N;
	cin >> N;
	long number_1 = 0;
	long number_2 =	1;
	long fib = 0;
	for (int i = 1; i <= N; ++i) {
		fib = number_1 + number_2;
		number_1 = number_2;
		number_2 = fib;
	}
	cout << fib;
}
