// 숫자의 개수
#include <iostream>
using namespace std;

int main() {
	
	int A, B, C;
	cin >> A >> B >> C;
	int t = A * B * C;
	int d[10] = {};
	// 계산 결과를 자릿수별로 확인하여 저장
	while (t > 0) {
		d[t % 10]++;
		t /= 10;
	}
	for (int i = 0; i < 10; ++i) cout << d[i] << '\n';
	return 0;
}