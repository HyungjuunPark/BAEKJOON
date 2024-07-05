// ��Ʈ�λ��̵�
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string N;
    getline(cin, N);
    int n = N.size();
    bool swapped;

    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (N[i - 1] < N[i]) {
                swap(N[i - 1], N[i]);
                swapped = true;
            }
        }
        n--; // �ִ��� �� �ڷ� �̵��ϹǷ� ���� �񱳿��� ����
    } while (swapped);

    cout << N;
    return 0;

}