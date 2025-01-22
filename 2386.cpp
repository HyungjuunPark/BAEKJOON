// 도비의 영어 공부
#include <iostream>
#include <string>
using namespace std;

string str;

int main() {
	while (true) {
		int cnt = 0;
		getline(cin, str);

		if (str[0] == '#') break;

		for (int i = 2; i < str.size(); i++) {
			if (str[i] == str[0]) cnt++;
			if (str[i] == str[0] - 32) cnt++;
		}

		cout << str[0] << ' ' << cnt << '\n';
	}

	return 0;
}