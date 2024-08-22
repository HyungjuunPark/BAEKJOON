// 대칭 차집합
#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    unordered_set<int> A;
    unordered_set<int> B;

    int x;

    // 입력을 받아서 집합 A에 삽입
    for (int i = 0; i < a; i++) {
        cin >> x;
        A.insert(x);
    }

    // 입력을 받아서 집합 B에 삽입
    for (int j = 0; j < b; j++) {
        cin >> x;
        B.insert(x);
    }

    int cnt = a + b;

    // A와 B의 교집합의 크기 구하기
    for (const int& elem : A) {
        if (B.find(elem) != B.end()) {
            cnt -= 2; // 교집합의 각 원소마다 cnt를 2만큼 감소
        }
    }

    cout << cnt;

    return 0;
}
