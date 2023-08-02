#include <iostream>
#include <stdlib.h>
using namespace std;
void main() {
	string S = "��â��", P = "��Ƽ��", J = "������";
	int money[6] = {}, sum[6] = {}, choice, win[3] = {};


	while (1) {
		string winner = "";
		
		cout << "���� : ";
		cin >> winner;

		if (winner == "��â��") {
			cout << "��Ƽ�� -> ��â�� : ";
			cin >> money[0];
			cout << "������ -> ��â�� : ";
			cin >> money[1];
			sum[0] += money[0];
			sum[1] += money[1];
			win[0] += 1;
		}
		else if (winner == "��Ƽ��") {
			cout << "��â�� -> ��Ƽ�� : ";
			cin >> money[2];
			cout << "������ -> ��Ƽ�� : ";
			cin >> money[3];
			sum[2] += money[2];
			sum[3] += money[3];
			win[1] += 1;
		}
		else if (winner == "������") {
			cout << "��â�� -> ������ : ";
			cin >> money[4];
			cout << "��Ƽ�� -> ������ : ";
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
		cout << "-----------------�� ��--------------------" << endl;
		cout << S << " : " << sum[0] + sum[1] - sum[2] - sum[4] << endl;
		cout << P << " : " << sum[2] + sum[3] - sum[0] - sum[5] << endl;
		cout << J << " : " << sum[4] + sum[5] - sum[1] - sum[3] << endl << endl;
		cout << "����ϱ�(1), ����(2) : ";
		cin >> choice;

		if (choice == 1) {
			system("cls");
			continue;
		}
		else if (choice == 2) {
			system("cls");
			cout << "-----------------�� ��--------------------" << endl;
			cout << S << " : " << sum[0] + sum[1] << endl;
			cout << P << " : " << sum[2] + sum[3] << endl;
			cout << J << " : " << sum[4] + sum[5] << endl;
			cout << "-----------------�� ��--------------------" << endl;
			cout << "��Ƽ�� -> ��â�� : " << sum[0] << endl;
			cout << "������ -> ��â�� : " << sum[1] << endl << endl;
			cout << "��â�� -> ��Ƽ�� : " << sum[2] << endl;
			cout << "������ -> ��Ƽ�� : " << sum[3] << endl << endl;
			cout << "��â�� -> ������ : " << sum[4] << endl;
			cout << "��Ƽ�� -> ������ : " << sum[5] << endl;
			cout << "-----------------�� ��--------------------" << endl;
			cout << S << " : " << sum[0] + sum[1] - sum[2] - sum[4] << endl;
			cout << P << " : " << sum[2] + sum[3] - sum[0] - sum[5] << endl;
			cout << J << " : " << sum[4] + sum[5] - sum[1] - sum[3] << endl;
			cout << "-----------------�� ��--------------------" << endl;
			cout << "��â�� : " << win[0] << "\t��Ƽ�� : " << win[1] << "\t������ : " << win[2];
			exit(0);
		}
		else {
			cout << "Error" << endl;
			continue;
		}
	}
}