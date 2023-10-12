// ¼ýÀÚÀÇ ÇÕ
#include <iostream>
using namespace std;

int main() {
	int n, i, sum = 0;

	cin >> n;

	char* N = new char();

	for (i = 0; i < n; i++) {
		cin >> *(N + i);
		sum += *(N + i) - '0';
	}

	cout << sum;

	return 0;
}
