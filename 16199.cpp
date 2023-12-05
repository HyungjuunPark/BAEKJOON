// 나이 계산하기
#include <iostream>
using namespace std;

int main() {

	int i, B[3], S[3], M_age = 0, S_age = 1, Y_age=1;

	cin >> B[0] >> B[1] >> B[2];
	cin >> S[0] >> S[1] >> S[2];

	if (S[0] - B[0] == 0) {
		if (S[1] > B[0])
			M_age++;
		else if (S[2] > B[2])
			M_age++;
	}
	else {
		M_age += S[0] - B[0];
	}

	cout << M_age << '\n' << S_age << '\n' << Y_age;

	return 0;
}