﻿
#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;
	if ((a == 12) or (a == 1) or (a == 2)) cout << "Winter";
	if ((a == 3) or (a == 4) or (a == 5)) cout << "Spring";
	if ((a == 6) or (a == 7) or (a == 8)) cout << "Summer";
	if ((a == 9) or (a == 10) or (a == 11)) cout << "Autumn";
}
