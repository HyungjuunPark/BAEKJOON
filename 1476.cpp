// 날 계산
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int E, S, M;
    cin >> E >> S >> M;

    int year = 1;
    int e = 1, s = 1, m = 1;

    while (true) {
        if (e == E && s == S && m == M) {
            break;
        }

        e++;
        s++;
        m++;
        year++;

        if (e > 15) e = 1;
        if (s > 28) s = 1;
        if (m > 19) m = 1;
    }

    cout << year << endl;
    return 0;

}
