#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a, b;
	cin >> a >> b;
	int n = a.size();
	int k = b.size();

	if (n > k) {
		cout << ">";
	}
	if (n < k) {
		cout << "<";
	}
	else if (n == k) {
		if (a.compare(b) > 0) {
			cout << ">";
		}
		else if (a.compare(b) <0) {
			cout << "<";
		}
		else  {
			cout << "=";
		}
	}
}