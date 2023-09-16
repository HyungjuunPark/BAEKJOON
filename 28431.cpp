// 양말 짝 맞추기
#include <iostream>
using namespace std;

int main() {
	int i, sock[5], cnt = 0, tmp[3], res[3] = { 0 };

	for (i = 0; i < 5; i++) 
		cin >> sock[i];

	tmp[0] = sock[0];

	for (i = 1; i < 5; i++) {
		if (tmp[0] != sock[i])
			cnt++;
	}
	if (cnt == 2) {
		cnt = 0;
		for (i = 1; i < 5; i++) {
			if (tmp[0] != sock[i]) {
				tmp[1] = sock[i];
				cnt++;
			}
		}
		if (cnt == 2)
			cout << tmp[0];
		else
			cout << tmp[1];
	}
	else {
		for (i = 1; i < 5; i++) {
			if (tmp[1] != sock[i]) 
				tmp[1] = sock[i];
		}
		for (i = 1; i < 5; i++) {
			if ((tmp[0] != sock[i]) && (tmp[1] != sock[i]))
				tmp[2] = sock[i];
		}
		for (i = 0; i < 5; i++) {
			if (tmp[0] == sock[i])
				res[0]++;
			else if (tmp[1] == sock[i])
				res[1]++;
			else
				res[2]++;
		}
		for (i = 0; i < 3; i++) {
			if (res[i] == 1)
				cout << tmp[i];
		}
	}
	return 0;
}
