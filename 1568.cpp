// »õ
#include <iostream>
using namespace std;

int main() {
    int n, i = 1, cnt = 0;
    cin >> n;

    while (n != 0) {
        if (n < i)
            i = 1;
        n -= i;
        i++;
        cnt++;
    }
    cout << cnt;
   
    return 0;
}