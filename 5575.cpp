// 타임 카드
#include <iostream>
using namespace std;

int main() {
	int T[3][6], i, j, R[3][3];

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 6; j++)
			cin >> T[i][j];
	}
	for (i = 0; i < 3; i++) {
		R[i][0] = T[i][3] - T[i][0];
		if ((T[i][4] - T[i][1]) < 0) {
			R[i][0]--;
			R[i][1] = 60 + T[i][4] - T[i][1];
		}
		else
			R[i][1] = T[i][4] - T[i][1];
	}
	for (i = 0; i < 3; i++) {
		R[i][1] = T[i][4] - T[i][1];
		if ((T[i][5] - T[i][2]) < 0) {
			R[i][1]--;
			R[i][2] = 60 + T[i][5] - T[i][2];
		}
		else
			R[i][2] = T[i][5] - T[i][2];
	}
	for (i = 0; i < 3; i++) {
		cout << endl;
		for (j = 0; j < 3; j++) {
			if (R[i][j] < 0) {
				R[i][j - 1] = R[i][j - 1] - 1;//?
				R[i][j] += 60;
			}
			cout << R[i][j] << " ";
		}
	}

	return 0;
}