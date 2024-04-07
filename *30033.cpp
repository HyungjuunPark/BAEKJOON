// Rust Study
#include <iostream>
using namespace std;

int main() {
	int N, i, cnt = 0;
	cin >> N;
	int* A = new int[N]();
	int* B = new int[N]();
	for (i = 0; i < N; i++) 
		cin >> A[i];
	for (i = 0; i < N; i++)
		cin >> B[i];
	for (i = 0; i < N; i++) {
		if (A[i] <= B[i])
			cnt++;
	}
	cout << cnt;
	return 0;
}
