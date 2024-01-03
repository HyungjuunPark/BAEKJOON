// 10ºÎÁ¦
#include <iostream>
using namespace std;

int main() {
	int day, num[5], i, cnt = 0;
	cin >> day;
	
	for (i = 0; i < 5; i++)
		cin >> num[i];
	for (i = 0; i < 5; i++) {
		if (day == num[i])
			cnt++;
	}

	cout << cnt;
	return 0;
}
