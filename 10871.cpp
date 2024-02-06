// X보다 작은 수
#include <iostream>
using namespace std;

int main() {

    int N, X, i;

    cin >> N >> X;

    int* arr = new int[N]();

    for (i = 0; i < N; i++)
        cin >> arr[i];

    for (i = 0; i < N; i++) {
        if (arr[i] < X)
            cout << arr[i] << " ";
    }
    return 0;
}