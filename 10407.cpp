// 2 Å¸¿ö
#include <iostream>
#include <math.h>
using namespace std;


int main() {
    int h, n;
    cin >> h;

    for (int i = 1; i <= h; i++) {
        if (h == 1) {
            n = 2;
            break;
        }
        n = pow(2, 2);
        h--;
    }

    cout << n % 3;
   
    return 0;
}