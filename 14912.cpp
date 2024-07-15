// 숫자 빈도수
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    char digit;
    cin >> n >> digit;
    int repeated = 0;

    for (int i = 0; i < n; i++) {
        string num = to_string(i + 1);
        for (int k = 0; k < num.length(); k++) {
            if (num[k] == digit)
                repeated++;
        }
    }
    cout << repeated;

    return 0;
}
