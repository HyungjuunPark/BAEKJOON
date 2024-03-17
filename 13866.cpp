// ÆÀ ³ª´©±â
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d;

	cin >> a >> b >> c >> d;

	if ((a + d) >= (b + c))
		cout << (a + d) - (b + c);
	else
		cout << (b + c) - (a + d);

	return 0;
}
