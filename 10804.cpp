// 카드 역배치
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[20], a[10], b[10], tmp, n;

    for (int i = 0; i < 20; i++)
        arr[i] = i + 1;

    for (int i = 0; i < 10; i++) {
        n = 1;
        cin >> a[i] >> b[i];
        for (int j = a[i] - 1; j < a[i] + (b[i] - a[i]) / 2; j++) {
            tmp = arr[j];
            arr[j] = arr[b[i] - n];
            arr[b[i] - n] = tmp;
            n++;
        }
    }

    for (int i = 0; i < 20; i++)
        cout << arr[i] << " ";
    
    return 0;
}