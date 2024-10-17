// ½º³×ÀÌÅ©¹öµå
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, L, h[10000], cnt = 0;
    cin >> N >> L;
   
    for (int i = 0; i < N; i++)
        cin >> h[i];

    sort(h, h + N);
    
    for (int i = 0; i < N; i++) {
        if (L < h[cnt])
            break;
        else {
            L++;
            cnt++;
        }
    }
    cout << L;

    return 0;
}
