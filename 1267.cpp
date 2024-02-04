// 핸드폰 요금
#include <iostream>
using namespace std;

int main() {

    int i, N, Y = 0, M = 0, T;
    cin >> N;
  
    for (i = 0; i < N; i++) {
        cin >> T;
        Y += (T / 30 + 1) * 10;
        M += (T / 60 + 1) * 15;
    }

    if (Y < M)
        cout << "Y " << Y;
    else if (Y > M)
        cout << "M " << M;
    else
        cout << "Y M " << Y;
    
    return 0;
}