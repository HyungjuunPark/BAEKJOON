// ³ªÀÌ °è»êÇÏ±â
#include <iostream>
using namespace std;

int main() {
	int B[3], S[3], M_age, S_age, Y_age;

	cin >> B[0] >> B[1] >> B[2];
	cin >> S[0] >> S[1] >> S[2];

	if (B[1] < S[1])
		M_age = S[0] - B[0];
	else if (B[1] == S[1] && B[2] <= S[2])
		M_age = S[0] - B[0];
	else
		M_age = S[0] - B[0] - 1;

	S_age = S[0] - B[0] + 1;
	Y_age = S[0] - B[0];

	cout << M_age << '\n' << S_age << '\n' << Y_age;

	return 0;
}