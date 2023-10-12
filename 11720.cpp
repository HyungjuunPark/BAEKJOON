// 숫자의 합
#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, i, sum = 0;

	cin >> n;

	int* N = new int[n]();

	for (i = 0; i < n; i++) {
		cin >> N[i];
		sum += N[i];
	}

	cout << sum;

	return 0;
}