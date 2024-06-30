// ¾ËÆÄºª °³¼ö
#include <iostream>
using namespace std;

int main() {
	int i, j, cnt[26] = { 0 };
	string S;
	cin >> S;
	
	for (i = 0; i < S.length(); i++)
		cnt[S[i] - 'a']++;

	for (i = 0; i < 26; i++)
		cout << cnt[i] << " ";

	return 0;
}
