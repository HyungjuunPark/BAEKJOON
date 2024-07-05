// 소트인사이드
#include <iostream>
#include <string>
using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    string N;
    getline(cin, N);
    int n = N.size();
    bool swapped;

    do {
        swapped = false;
        for (int i = 1; i < n; i++) {
            if (N[i - 1] < N[i]) {
                swap(N[i - 1], N[i]);
                swapped = true;
            }
        }
        n--; // 최댓값이 맨 뒤로 이동하므로 다음 비교에서 제외
    } while (swapped);

    cout << N;
    return 0;

}