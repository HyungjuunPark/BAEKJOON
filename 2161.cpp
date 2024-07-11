// ī��1
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    // 1���� n������ ī�带 ť�� �ִ´�.
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }

    // ���� ���� ī�带 ������ �� ���� ī�带 �Ʒ��� �ű�� ������ �ݺ�
    while (q.size() > 1) {
        // ���� ���� ī�带 ������.
        cout << q.front() << " ";
        q.pop();

        // ���� ī�带 ���� �Ʒ��� �ű��.
        q.push(q.front());
        q.pop();
    }

    // ���������� ���� ī�� ���
    cout << q.front() << endl;

    return 0;
}