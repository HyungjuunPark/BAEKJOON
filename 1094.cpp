// 막대기
#include <iostream>
#include <string>
using namespace std;

// 십진수를 이진수로 바꾸는 함수
int tentotwo(int num) {
    int result = 0;
    int remain;
    int i = 1;

    // 2로 나눌 때의 나머지를 이용한 변환법
    while (num > 0) {
        remain = num % 2;
        result += remain * i;
        num /= 2;
        i *= 10;
    }

    return result;
}

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int X;               // 만들고자 하는 막대의 길이
    string convert_num;
    int count = 0;       // 붙여야하는 횟수

    cin >> X;

    // 변환된 이진수 값을 문자열로 변환
    // 문자열 앞에서부터 1인 부분의 개수를 세어줌
    // 1 = 붙여야하는 막대기에 해당하는 부분
    convert_num = to_string(tentotwo(X));
    for (int i = 0; i < convert_num.size(); i++) {
        if (convert_num[i] == '1') {
            count++;
        }
    }

    cout << count;
}