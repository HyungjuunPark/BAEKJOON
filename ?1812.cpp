// »çÅÁ
#include <iostream>
using namespace std;

int main() {
    int n, arr[999], x[999];
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    arr[0]==x[0]+x[1]
        arr[1]==x[1]+x[2]
        arr[2]==x[2]+x[0]

        x[0]=arr[0]-x[1]
        x[1]=arr[1]-x[2]
        x[2]=arr[2]-x[0]
    return 0;
}
