// 점수 계산
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int arr[8], sum = 0, idx[8];

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        idx[i] = i + 1;  // 인덱스를 1부터 시작하게 설정
    }
    
    // 버블 정렬을 이용하여 점수를 내림차순 정렬하고, 인덱스도 같이 정렬
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 7 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swap(idx[j], idx[j + 1]);
            }
        }
    }

    // 상위 5개 점수의 합 계산
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // 상위 5개 점수의 인덱스를 오름차순으로 정렬
    sort(idx, idx + 5);

    cout << sum << '\n';
    for (int i = 0; i < 5; i++) {
        cout << idx[i] << " ";
    }
    cout << '\n';
    return 0;
}
