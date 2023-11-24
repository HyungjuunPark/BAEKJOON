// Æò±Õ Á¡¼ö
#include <iostream>
using namespace std;

int main() {
	
	int score[5], avg = 0, i;

	for (i = 0; i < 5; i++) {
		cin >> score[i];
		if (score[i] < 40)
			score[i] = 40;
		avg += score[i];
	}
	
	avg /= 5;
	cout << avg;

	return 0;
}
