// AFC ¿úºí´ø
#include <iostream>
using namespace std;

int main() {

	int a, b, x, y;

	cin >> a >> b;

	x = a + b;
	y = a - b;

	if ((x - (int)x) != 0)
		cout << -1;
	else
		cout << x / 2 << " " << y / 2;

	return 0;
}