// ���� ���
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[8], sum = 0, idx[8];

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        idx[i] = i + 1;  // �ε����� 1���� �����ϰ� ����
    }

    // ���� ������ �̿��Ͽ� ������ �������� �����ϰ�, �ε����� ���� ����
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap(idx[j], idx[j + 1]);
            }
        }
    }

    // ���� 5�� ������ �� ���
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // ���� 5�� ������ �ε����� ������������ ����
    sort(idx, idx + 5);

    cout << sum << '\n';
    for (int i = 0; i < 5; i++) {
        cout << idx[i] << " ";
    }
    cout << '\n';

    return 0;
}
