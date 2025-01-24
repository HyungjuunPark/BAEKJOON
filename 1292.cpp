// 쉽게 푸는 문제
#include <iostream>
using namespace std;
int main()
{
    int a, b, sum = 0, cnt = 0;
    cin >> a >> b;
    int n[1000];

    for (int i = 1; cnt < 1000; i++) {
        for (int j = 0; j < i; j++) {
            n[cnt++] = i; 
            if (cnt == 1000) 
                break;
        }
    }

    for (int i = a - 1; i <= b - 1; i++)
        sum += n[i];
    
    cout << sum << '\n';
    return 0;
}