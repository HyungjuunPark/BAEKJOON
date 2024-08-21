// º¸¹°
#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int x, int y) {
    return x > y;
}
int main() {
    int n, a[50], b[50], s = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    sort(a, a + n);
    sort(b, b + n, compare);

    for (int i = 0; i < n; i++)
        s += a[i] * b[i];
    cout << s;
    return 0;
}
