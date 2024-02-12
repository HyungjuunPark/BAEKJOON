// º° Âï±â - 7
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, i, j, k;
    cin >> n;

    for (i = 0; i < n*2-1; i++) {
        if (i < n) {
            for (j = 0; j < n; j++)
                if (j > i)
                    cout << ' ';
            for (k = 0; k < (i + 1) * 2 - 1; k++)
                cout << '*';
        }
        else if(i >= n){
            for (j = 0; j < n; j++)
                if (j + n <= i)
                    cout << ' ';
            for (k = 0; k < (n + n - i - 1) * 2 - 1; k++)
                cout << '*';
        }
        cout << '\n';
    }  
    return 0;
}
