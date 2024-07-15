// ∫“ªÁ¡∂
#include <iostream>
using namespace std;

int main() {
    
    int x, m, sum;
    cin >> x >> m;
    sum = x;

    for (int i = 0; i < m; i++) {
        sum += x;
    }
    cout << sum;

    return 0;
}