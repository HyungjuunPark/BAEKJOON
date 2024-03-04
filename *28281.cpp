// 선물
#include <iostream>
using namespace std;

int main() {
	int N, X, i;
	cin >> N >> X;
	int* A = new int[N]();

	for (i = 0; i < N; i++) {
		cin >> A[i];
	}
	
	int min = A[0] + A[1];
	for (i = 0; i < N; i++) {
		if (i < N - 1)
			if ((A[i] + A[i + 1]) < min)
				min = A[i] + A[i + 1];
	}
	
	int sum = min * X;
	cout << sum;
	return 0;
}
