// ¼ıÀÚ
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long a, b;
    cin >> a >> b;
    if (a > b)swap(a, b);
    if (a == b || b - a == 1)
        cout << 0;
    else {
        cout << b - a - 1 << '\n';
        for (long long i = a; i < b - 1; i++)
            cout << i + 1 << " ";
    }
   

    return 0;
}

