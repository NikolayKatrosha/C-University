#include <iostream>
#include<cctype>
using namespace std;
int main()
{
	char a;
	while ((a = cin.get()) != EOF) {
		if (islower(a)) {
			a = toupper(a);
		}
		else {
			a = tolower (a);
		}
		cout << a;
	}
}