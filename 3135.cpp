// ¶óµð¿À
#include <iostream>
using namespace std;

int main() {
	int a, b, n, f[5], min;
	cin >> a >> b;
	cin >> n;
	min = abs(a - b);

	for (int i = 0; i < n; i++) {
		cin >> f[i];
		if (abs(b - f[i]) < min)
			min = abs(b - f[i]) + 1;
	}

	cout << min;

	return 0;
}