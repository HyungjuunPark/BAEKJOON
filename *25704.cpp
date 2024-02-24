// Ãâ¼® ÀÌº¥Æ®
#include <iostream>
using namespace std;

int main() {
	//코드를 좀 더 단순화 해보자
	int N, P, result;
	cin >> N >> P;
	if (P > 2000) {
		if (N >= 20) {
			result = (P * 3 / 4 < P - 2000) ? P * 3 / 4 : P - 2000;
			cout << result;
		}
		else if (20 > N && N >= 15) {
			result = (P - 2000 < P * 9 / 10) ? P - 2000 : P * 9 / 10;
			cout << result;
		}
		else if (15 > N && N >= 10) {
			result = (P * 9 / 10 < P - 500) ? P * 9 / 10 : P - 500;
			cout << result;
		}
		else if (10 > N && N >= 5)
			cout << P - 500;
		else
			cout << P;
	}
	else if (P > 500) {
		if (N >= 15)
			cout << 0;
		else if (15 > N && N >= 10) {
			result = (P * 9 / 10 < P - 500) ? P * 9 / 10 : P - 500;
			cout << result;
		}
		else if (10 > N && N >= 5)
			cout << P - 500;
		else
			cout << P;
	}
	else {
		if (N >= 5)
			cout << 0;
		else
			cout << P;
	}
	return 0;
}
