// 사탕
#include <iostream>
using namespace std;

int main() {
    int n, f = 0;
    cin >> n;
    int v[999];  

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        f += (i % 2 == 1) ? -v[i] : v[i];
    }

    f /= 2;
    cout << f << endl;

    for (int i = 0; i < n - 1; i++) {
        f = v[i] - f;
        cout << f << endl;
    }

    return 0;
}

