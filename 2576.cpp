// È¦¼ö
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n[7], sum = 0, min = 100, i;

    for (i = 0; i < 7; i++) {
        cin >> n[i];
        if (n[i] % 2 != 0) {
            sum += n[i];
            if (n[i] < min)
                min = n[i];
        }
    }
    if (sum != 0)
        cout << sum << '\n' << min;
    else
        cout << -1;

    return 0;
}