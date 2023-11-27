// 치즈버거 만들기
#include <iostream>
using namespace std;

int main() {

	int A, B;

	cin >> A >> B;

	if (A == B)
		cout << A + B - 1;
	else if (A > B)
		cout << B * 2 + 1;
	else
		cout << A * 2 - 1;

	return 0;
}