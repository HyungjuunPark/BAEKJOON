// Åõ¸í
#include <iostream>
using namespace std;

int main() {
    int n, m, xy[4], cnt = 0, picture[100][100] = { 0 };
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> xy[j];
        }
        for (int k = xy[0] - 1; k < xy[2]; k++) {
            for (int l = xy[1] - 1; l < xy[3]; l++)
                picture[k][l]++;
        }
    }
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 100; j++) {
            if (picture[i][j] > m)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}
