// 심부름 가는 길
#include <iostream>
using namespace std;

int main() {
	int t[4], x, y, i, sum = 0;

	for (i = 0; i < 4; i++) {
		cin >> t[i];
		sum += t[i];
	}

	x = sum / 60;
	y = sum % 60;

	cout << x << '\n' << y;


	return 0;
}