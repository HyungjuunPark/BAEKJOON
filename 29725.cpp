// 체스 초보 브실이
#include <iostream>
using namespace std;

int main() {
	int i, j, score = 0;
	char C[8][8];

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) 
			cin >> C[i][j];
	}

	for (i = 0; i < 8; i++) {
		for (j = 0; j < 8; j++) {
			switch (C[i][j]) {
			case '.':
			case 'K':
			case 'k':
				score += 0;
				break;
			case 'P':
				score += 1;
				break;
			case 'p':
				score -= 1;
				break;
			case 'N':
			case 'B':
				score += 3;
				break;
			case 'n':
			case 'b':
				score -= 3;
				break;
			case 'R':
				score += 5;
				break;
			case 'r':
				score -= 5;
				break;
			case 'Q':
				score += 9;
				break;
			case 'q':
				score -= 9;
				break;
			}
		}
	}
	cout << score;
	return 0;
}