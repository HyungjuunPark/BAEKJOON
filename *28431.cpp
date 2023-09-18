// 양말 짝 맞추기
#include <iostream>
using namespace std;

int main() {
	int i, sock[5], cnt[3] = { 0 }, tmp[3];

	for (i = 0; i < 5; i++) 
		cin >> sock[i];

	tmp[0] = sock[0];

	for (i = 1; i < 5; i++) {
		if (tmp[0] != sock[i]) {
			tmp[1] = sock[i];
			break;
		}
	}

	for (i = 1; i < 5; i++) {
		if ((tmp[0] != sock[i]) && (tmp[1] != sock[i])) {
			tmp[2] = sock[i];
			break;
		}
	}

	for (i = 0; i < 5; i++) {
		if (tmp[0] == sock[i])
			cnt[0]++;
		else if (tmp[1] == sock[i])
			cnt[1]++;
		else
			cnt[2]++;
	}

	for (i = 0; i < 3; i++) {
		if ((cnt[i] % 2) == 1)
			cout << tmp[i];
	}
	
	return 0;
}
