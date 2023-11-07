// 주사위 세개
#include <iostream>
using namespace std;

int main() {
	int a, b, c, Max;

	cin >> a >> b >> c;

	if (a == b && a == c)
		cout << 10000 + a * 1000;
	else if (a != b && a != c && b != c) {
		Max = a;
		if (a < b) {
			Max = b;
			if (b < c)
				Max = c;
		}
		else if (a < c)
			Max = c;
	
		cout << Max * 100;
	}
	else if (a == b || a == c)
		cout << 1000 + a * 100;
	else
		cout << 1000 + b * 100;
	
	return 0;
}