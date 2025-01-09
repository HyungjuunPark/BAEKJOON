// 행운의 티켓
#include <iostream>
#include <string>
#include <vector>
using namespace std;

// 문자열의 특정 구간 [start, end)의 합을 계산
int calculateSum(const string& str, int start, int end) {
    int sum = 0;
    for (int i = start; i < end; ++i) {
        sum += str[i] - '0'; // 숫자로 변환 후 합산
    }
    return sum;
}

int main() {
    string number;
    cin >> number;
    int n = number.size();
    int maxLength = 0;

    // 길이를 2부터 n까지 증가시키며 확인
    for (int len = 2; len <= n; len += 2) { // 길이는 항상 짝수만 가능
        for (int i = 0; i + len <= n; ++i) {
            int mid = i + len / 2;
            // 왼쪽 구간의 합과 오른쪽 구간의 합 비교
            int leftSum = calculateSum(number, i, mid);
            int rightSum = calculateSum(number, mid, i + len);
            if (leftSum == rightSum) {
                maxLength = max(maxLength, len);
            }
        }
    }

    cout << maxLength << endl;
    return 0;
}