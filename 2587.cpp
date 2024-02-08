// ´ëÇ¥°ª2
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n[5], avg, mid, i, j, tmp;

    for (i = 0; i < 5; i++)
        cin >> n[i];

    avg = (n[0] + n[1] + n[2] + n[3] + n[4]) / 5;

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (n[i] > n[j]) {
                tmp = n[i];
                n[i] = n[j];
                n[j] = tmp;
            }
        }
    }
    mid = n[2];

    cout << avg << '\n' << mid;

    return 0;
}