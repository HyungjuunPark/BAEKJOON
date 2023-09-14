// 임스의 메이플컵
#include <iostream>
using namespace std;

int main() {
	int N, U, L;

	cin >> N >> U >> L;

	if (N >= 1000) {
		if ((U >= 8000) || (L >= 260))
			cout << "Very Good";
		else
			cout << "Good";
	}
	else
		cout << "Bad";
	return 0;
}