// ÀüÀÚ·¹ÀÎÁö
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;

		if (a > 0)
			cout << (b - a) * e;
		else if (a < 0)
			cout << -1 * a * c + d + b * e;
		else
			cout << d + b * e;
	
	return 0;
}
