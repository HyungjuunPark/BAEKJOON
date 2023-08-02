#include <iostream>
#include <stdlib.h>
using namespace std;
void main() {
	string S = "서창리", P = "파티마", J = "조공주";
	int money[6] = {}, sum[6] = {}, choice, win[3] = {};

	while (1) {
		string winner = "";
		
		cout << "승자 : ";
		cin >> winner;

		if (winner == "서창리") {
			cout << "파티마 -> 서창리 : ";
			cin >> money[0];
			cout << "조공주 -> 서창리 : ";
			cin >> money[1];
			sum[0] += money[0];
			sum[1] += money[1];
			win[0] += 1;
		}
		else if (winner == "파티마") {
			cout << "서창리 -> 파티마 : ";
			cin >> money[2];
			cout << "조공주 -> 파티마 : ";
			cin >> money[3];
			sum[2] += money[2];
			sum[3] += money[3];
			win[1] += 1;
		}
		else if (winner == "조공주") {
			cout << "서창리 -> 조공주 : ";
			cin >> money[4];
			cout << "파티마 -> 조공주 : ";
			cin >> money[5];
			sum[4] += money[4];
			sum[5] += money[5];
			win[2] += 1;
		}
		else {
			cout << "Error" << endl;
			continue;
		}
		system("cls");
		cout << "-----------------결 과--------------------" << endl;
		cout << S << " : " << sum[0] + sum[1] - sum[2] - sum[4] << endl;
		cout << P << " : " << sum[2] + sum[3] - sum[0] - sum[5] << endl;
		cout << J << " : " << sum[4] + sum[5] - sum[1] - sum[3] << endl << endl;
		cout << "계속하기(1), 종료(2) : ";
		cin >> choice;

		if (choice == 1) {
			system("cls");
			continue;
		}
		else if (choice == 2) {
			system("cls");
			cout << "-----------------딴 돈--------------------" << endl;
			cout << S << " : " << sum[0] + sum[1] << endl;
			cout << P << " : " << sum[2] + sum[3] << endl;
			cout << J << " : " << sum[4] + sum[5] << endl;
			cout << "-----------------줄 돈--------------------" << endl;
			cout << "파티마 -> 서창리 : " << sum[0] << endl;
			cout << "조공주 -> 서창리 : " << sum[1] << endl << endl;
			cout << "서창리 -> 파티마 : " << sum[2] << endl;
			cout << "조공주 -> 파티마 : " << sum[3] << endl << endl;
			cout << "서창리 -> 조공주 : " << sum[4] << endl;
			cout << "파티마 -> 조공주 : " << sum[5] << endl;
			cout << "-----------------결 과--------------------" << endl;
			cout << S << " : " << sum[0] + sum[1] - sum[2] - sum[4] << endl;
			cout << P << " : " << sum[2] + sum[3] - sum[0] - sum[5] << endl;
			cout << J << " : " << sum[4] + sum[5] - sum[1] - sum[3] << endl;
			cout << "-----------------승 수--------------------" << endl;
			cout << "서창리 : " << win[0] << "\t파티마 : " << win[1] << "\t조공주 : " << win[2];
			exit(0);
		}
		else {
			cout << "Error" << endl;
			continue;
		}
	}
}