// 타임 카드
#include <iostream>
using namespace std;

int main() {

    int G[3][3], L[3][3], i, j, Gt[3], Lt[3];

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cin >> G[i][j];
        for (j = 0; j < 3; j++)
            cin >> L[i][j];
    }

    for (i = 0; i < 3; i++) {
        Gt[i] = G[i][0] * 3600 + G[i][1] * 60 + G[i][2];
        Lt[i] = L[i][0] * 3600 + L[i][1] * 60 + L[i][2];
        Gt[i] = Lt[i] - Gt[i];
    }

    for (i = 0; i < 3; i++) {
        G[i][0] = Gt[i] / 3600;
        G[i][1] = (Gt[i] % 3600) / 60;
        G[i][2] = (Gt[i] % 3600) % 60;
    }
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            cout << G[i][j] << " ";
        cout << '\n';
    }
    return 0;
}
