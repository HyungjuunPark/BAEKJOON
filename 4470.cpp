// 줄번호
#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int n, i;
	cin >> n;
	string* s = new string[n]();

	cin.ignore();
	for (i = 0; i < n; i++) {
		getline(cin, s[i]);
	}

	for (i = 0; i < n; i++)
		cout << i + 1 << ". " << s[i] << endl;

	return 0;
}
