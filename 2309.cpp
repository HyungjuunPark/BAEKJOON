// ¿œ∞ˆ ≥≠¿Ô¿Ã
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n[10], sum = 0;

    for (int i = 0; i < 9; i++) {
        cin >> n[i];
        sum += n[i];
    }

    sort(n, n + 9);

    for (int i = 0; i < 8; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (sum - (n[i] + n[j]) == 100) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j)
                        cout << n[k] << '\n';
                }
                return 0;
            }
        }
    }

    return 0;
}

