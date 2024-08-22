// ��Ī ������
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    unordered_set<int> A;
    unordered_set<int> B;

    int x;

    // �Է��� �޾Ƽ� ���� A�� ����
    for (int i = 0; i < a; i++) {
        cin >> x;
        A.insert(x);
    }

    // �Է��� �޾Ƽ� ���� B�� ����
    for (int j = 0; j < b; j++) {
        cin >> x;
        B.insert(x);
    }

    int cnt = a + b;

    // A�� B�� �������� ũ�� ���ϱ�
    for (const int& elem : A) {
        if (B.find(elem) != B.end()) {
            cnt -= 2; // �������� �� ���Ҹ��� cnt�� 2��ŭ ����
        }
    }

    cout << cnt;

    return 0;
}
