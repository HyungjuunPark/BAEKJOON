// ´ºÅÏ°ú »ç°ú
#include <iostream>
using namespace std;

int main() {
	int h[4], x, y, r;
	cin >> h[0] >> h[1] >> h[2] >> h[3];
	cin >> x >> y >> r;

	if (h[0] == x)
		cout << 1;
	else if (h[1] == x)
		cout << 2;
	else if (h[2] == x)
		cout << 3;
	else if (h[3] == x)
		cout << 4;
	else
		cout << 0;

	return 0;
}
