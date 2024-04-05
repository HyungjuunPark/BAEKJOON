// ÀÎ°øÁö´É ½Ã°è
#include <iostream>
using namespace std;

int main() {
	int A, B, C, D;
	cin >> A >> B >> C >> D;
	cout << (A + (B + (C + D) / 60) / 60) % 24 << " " <<
		(B + (C + D) / 60) % 60 << " " << (C + D) % 60;
	return 0;
}
