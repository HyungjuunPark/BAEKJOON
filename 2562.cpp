// ÃÖ´ñ°ª
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    int n[9], max = 0, num;

    for (int i = 0; i < 9; i++)
        cin >> n[i];
    
    for (int i = 0; i < 9; i++) {
        if (max < n[i]) {
            max = n[i];
            num = i + 1;
        }
    }

    cout << max << '\n' << num;

    return 0;
}