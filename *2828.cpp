// 사과 담기 게임
#include <iostream>
using namespace std;
int boxPosLeft, boxPosRight;

int main() {
    int N, M, J;
    cin >> N >> M >> J;
    int move = 0;
    boxPosLeft = 1;
    boxPosRight = M;

    bool apple[10] = { false };  // 사과의 위치를 기록할 배열

    for (int i = 0; i < J; i++) {
        int applePos;
        cin >> applePos;

        // 사과 위치 기록
        apple[applePos - 1] = true;

        // 사과가 있을 경우 처리
        while (apple[applePos - 1]) {
            if (boxPosLeft <= applePos && applePos <= boxPosRight) {
                apple[applePos - 1] = false;  // 사과를 먹은 경우
            }
            else {
                if (applePos < boxPosLeft) {
                    boxPosLeft -= 1;
                    boxPosRight -= 1;
                    move++;
                }
                else {
                    boxPosLeft += 1;
                    boxPosRight += 1;
                    move++;
                }
            }
        }
    }

    cout << move << '\n';
}
