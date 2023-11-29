// 세수정렬
#include <iostream>
using namespace std;

int main() {
	
	int n[3], cnt[3] = { 0 }, i, result[3];

	cin >> n[0] >> n[1] >> n[2];

	if (n[0] > n[1])
		cnt[0]++;
	else
		cnt[1]++;
	if (n[0] > n[2])
		cnt[0]++;
	else
		cnt[2]++;
	if (n[1] > n[2])
		cnt[1]++;
	else
		cnt[2]++;

	for (i = 0; i < 3; i++) {
		if (cnt[i] == 0)
			result[0] = n[i];
		else if (cnt[i] == 1)
			result[1] = n[i];
		else
			result[2] = n[i];
	}
	
	cout << result[0] << " " << result[1] << " " << result[2];
	return 0;
}
