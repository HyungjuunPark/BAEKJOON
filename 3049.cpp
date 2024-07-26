// 다각형의 대각선
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n * (n - 1) * (n - 2) * (n - 3) / 24;
    return 0;
}
