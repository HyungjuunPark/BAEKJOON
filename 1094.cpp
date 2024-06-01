// �����
#include <iostream>
#include <string>
using namespace std;

// �������� �������� �ٲٴ� �Լ�
int tentotwo(int num) {
    int result = 0;
    int remain;
    int i = 1;

    // 2�� ���� ���� �������� �̿��� ��ȯ��
    while (num > 0) {
        remain = num % 2;
        result += remain * i;
        num /= 2;
        i *= 10;
    }

    return result;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X;               // ������� �ϴ� ������ ����
    string convert_num;
    int count = 0;       // �ٿ����ϴ� Ƚ��

    cin >> X;

    // ��ȯ�� ������ ���� ���ڿ��� ��ȯ
    // ���ڿ� �տ������� 1�� �κ��� ������ ������
    // 1 = �ٿ����ϴ� ����⿡ �ش��ϴ� �κ�
    convert_num = to_string(tentotwo(X));
    for (int i = 0; i < convert_num.size(); i++) {
        if (convert_num[i] == '1') {
            count++;
        }
    }

    cout << count;
}