// 카드1
#include <iostream>
#include <queue>
using namespace std;

int main() {
    int n;
    cin >> n;

    queue<int> q;

    // 1부터 n까지의 카드를 큐에 넣는다.
    for (int i = 1; i <= n; ++i) {
        q.push(i);
    }

    // 가장 위의 카드를 버리고 그 다음 카드를 아래로 옮기는 과정을 반복
    while (q.size() > 1) {
        // 가장 위의 카드를 버린다.
        cout << q.front() << " ";
        q.pop();

        // 다음 카드를 제일 아래로 옮긴다.
        q.push(q.front());
        q.pop();
    }

    // 마지막으로 남은 카드 출력
    cout << q.front() << endl;

    return 0;
}