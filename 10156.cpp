// °úÀÚ
#include <iostream>
using namespace std;

int main() {
	int K, N, M;

	cin >> K >> N >> M;
	if (K * N < M)
		cout << 0;
	else
		cout << K * N - M;


	return 0;
}