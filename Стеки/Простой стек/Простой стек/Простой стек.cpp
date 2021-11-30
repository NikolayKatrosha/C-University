#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int begin = 0;
	int end = 0;
	int x[10001];  
	string s;
	int n;
	int size = 0;

	while (cin >> s) {
		if (s == "push") {
			cin >> n;
			x[end] = n;
			end = (end + 1) % 10001;
			size++;
			cout << "ok" << endl;
		}
		if (s == "pop") {
			cout << x[begin] << endl;
			begin = (begin + 1) % 10001;
			size--;
		}
		if (s == "front") {
			cout << x[begin] << endl;
		}

		if (s == "size") {
			cout << size << endl;
		}
		if (s == "clear") {
			end = 0;
			cout << "ok" << endl;
		}
		if (s == "exit") {
			cout << "bye";
			return 0;
		}
	}
}
