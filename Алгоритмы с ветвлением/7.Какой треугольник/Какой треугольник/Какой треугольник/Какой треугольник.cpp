﻿
#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a == b) and (b == c) and (a == c)) cout << "1";
	else if ((a == b) or (a == c) or (b == c)) cout << "2";
	else cout << "3";
}
