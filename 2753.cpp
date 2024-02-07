// 시험 성적
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int y;
    cin >> y;

    if (y % 400 == 0)
        cout << 1;
    else if (y % 4 == 0 && y % 100 != 0)
        cout << 1;
    else
        cout << 0;
   
    return 0;
}