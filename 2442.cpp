// º° Âï±â - 5
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            if (j > i)
                cout << ' ';
        for (int k = 0; k < (i + 1) * 2 - 1; k++)
            cout << '*';
        cout << '\n';
    }
       
    return 0;
}