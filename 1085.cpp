// 직사각형에서 탈출
#include <iostream>
using namespace std;

int main() {
    int x, y, w, h, n[3], min;

    cin >> x >> y >> w >> h;

    min = x;
    n[0] = w - x;
    n[1] = y;
    n[2] = h - y;

    for (int i = 0; i < 3; i++) {
        if (n[i] <= min)
            min = n[i];
    }

    cout << min;
    
    return 0;
}