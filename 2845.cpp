// ÆÄÆ¼°¡ ³¡³ª°í ³­ µÚ
#include <iostream>
using namespace std;

int main() {
	int a, b, n[5], i;

	cin >> a >> b;
	for (i = 0; i < 5; i++)
		cin >> n[i];
	for (i = 0; i < 5; i++) 
		cout << n[i] - a * b << " ";
	return 0;
}
