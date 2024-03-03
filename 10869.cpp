// ½ÃÇè ¼ºÀû
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;

    if (100 >= n && n >= 90)
        cout << "A";
    else if (89 >= n && n >= 80)
        cout << "B";
    else if (79 >= n && n >= 70)
        cout << "C";
    else if (69 >= n && n >= 60)
        cout << "D";
    else
        cout << "F";

    return 0;
}
