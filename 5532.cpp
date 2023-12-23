// ¹æÇÐ ¼÷Á¦
#include <iostream>
using namespace std;

int main() {
	int L, A, B, C, D;
	cin >> L >> A >> B >> C >> D;
	
	int hw, mat, kor;

	if (A % C > 0)
		mat = A / C + 1;
	else
		mat = A / C;

	if (B % D > 0)
		kor = B / D + 1;
	else
		kor = B / D;

	hw = mat >= kor ? mat : kor;

	L -= hw;

	cout << L;

	return 0;
}
