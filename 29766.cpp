// DKSH Ã£±â
#include <iostream>
using namespace std;

int main() {
	int i, cnt = 0;

	char s[1000];

	cin >> s;

	for (i = 0; i < 997; i++) {
		if ((s[i] == 'D') && (s[i + 1] == 'K')
			&& (s[i + 2] == 'S') && (s[i + 3] == 'H'))
			cnt++;
	}

	cout << cnt;

	return 0;
}