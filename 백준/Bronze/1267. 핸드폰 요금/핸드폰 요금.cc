#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int time;
	int priceY = 0;
	int priceM = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> time;
		priceY += ((time / 30) * 10) + 10;
		priceM += ((time / 60) * 15) + 15;
	}

	if (priceY == priceM) {
		cout << 'Y' << ' ' << 'M' << ' ' << priceY;
	} else if (priceY > priceM) {
		cout << 'M' << ' ' << priceM;
	} else if (priceY < priceM) {
		cout << 'Y' << ' ' << priceY;
	}
}