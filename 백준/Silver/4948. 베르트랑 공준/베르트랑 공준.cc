#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int count = 0;
	bool isPrime = true;

	do {
		count = 0;
		cin >> n;
		if (n == 0) {
			break;
		}
		int doubleNum = n * 2;
		for (int i = n + 1; i <= doubleNum; i++) {
			isPrime = true;
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				count++;
			}
		}
		cout << count << '\n';
	} while (n != 0);
}