// ¿∑≥Ó¿Ã
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[3][4], i, j, cnt[3] = { 0 };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
                cnt[i]++;
        }
    }
    for (i = 0; i < 3; i++) {
        if (cnt[i] == 1)
            cout << "A" << '\n';
        else if (cnt[i] == 2)
            cout << "B" << '\n';
        else if (cnt[i] == 3)
            cout << "C" << '\n';
        else if (cnt[i] == 4)
            cout << "D" << '\n';
        else
            cout << "E" << '\n';
    }
    return 0;
}