// 사과 담기 게임
#include<iostream>
using namespace std;

int main() {
    int N, M, j, n[10] = { 0 }, num, l = 0;
    cin >> N >> M >> j;
    for (int i = 0; i < j; i++) {
        cin >> num;
        n[num]++;
    }

    while (1) {
        for (int i = 0; i < M; i++) {
            if (n[i] != 0)
                n[i]--;
        }
    }

    return 0;
}

