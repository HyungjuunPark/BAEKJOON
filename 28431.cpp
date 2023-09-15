// 양말 짝 맞추기
#include <iostream>
using namespace std;

int main() {
	int i, sock[5];

	for (i = 0; i < 5; i++)
		cin >> sock[i];
	
	if (sock[0] == sock[1]) {
		if (sock[0] == sock[2])
			cout << sock[0];
		else if (sock[2] == sock[3])
			cout << sock[4];
		else if (sock[2] == sock[4])
			cout << sock[3];
		else
			cout << sock[2];
	}
	else if (sock[0] == sock[2])
		if (sock[0] == sock[3])
			cout << sock[0];
		else if (sock[1] == sock[3])
			cout << sock[4];


	
	return 0;
}