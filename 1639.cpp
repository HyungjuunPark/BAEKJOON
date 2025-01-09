// ����� Ƽ��
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// ���ڿ��� Ư�� ���� [start, end)�� ���� ���
int calculateSum(const string& str, int start, int end) {
    int sum = 0;
    for (int i = start; i < end; ++i) {
        sum += str[i] - '0'; // ���ڷ� ��ȯ �� �ջ�
    }
    return sum;
}

int main() {
    string number;
    cin >> number;
    int n = number.size();
    int maxLength = 0;

    // ���̸� 2���� n���� ������Ű�� Ȯ��
    for (int len = 2; len <= n; len += 2) { // ���̴� �׻� ¦���� ����
        for (int i = 0; i + len <= n; ++i) {
            int mid = i + len / 2;
            // ���� ������ �հ� ������ ������ �� ��
            int leftSum = calculateSum(number, i, mid);
            int rightSum = calculateSum(number, mid, i + len);
            if (leftSum == rightSum) {
                maxLength = max(maxLength, len);
            }
        }
    }

    cout << maxLength << endl;
    return 0;
}