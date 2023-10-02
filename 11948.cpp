// 과목선택
#include <iostream>
using namespace std;

int main() {
	int A[4], B[2], sum = 0, i, tmp;

	for (i = 0; i < 4; i++)
		cin >> A[i];
	cin >> B[0] >> B[1];

	for (i = 1; i < 4; i++) {
		if (A[0] > A[i]) {
			tmp = A[0];
			A[0] = A[i];
			A[i] = tmp;
		}
	}

	sum += A[1] + A[2] + A[3];

	if (B[0] < B[1])
		sum += B[1];
	else
		sum += B[0];

	cout << sum;
	

	return 0;
}