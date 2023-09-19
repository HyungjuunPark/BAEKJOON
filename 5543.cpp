// 상근날드
#include <iostream>
using namespace std;

int main() {
	int L, M, S, coke, soda, pick;

	cin >> L >> M >> S >> coke >> soda;

	if ((M >= L) && (S >= L))
		pick = L;
	else if ((L >= M) && (S >= M))
		pick = M;
	else
		pick = S;

	if (coke > soda)
		cout << pick + soda - 50;
	else
		cout << pick + coke - 50;

	return 0;
}