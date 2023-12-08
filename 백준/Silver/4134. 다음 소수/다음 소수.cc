#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	long long num;
	bool isPrime = true;

	cin >> n;

	for (long long i = 0; i < n; i++) {
		cin >> num;
		if (num == 0 || num == 1) {
			cout << 2 << '\n';
			continue;
		}
		for (long long j = num; ; j++) {
			isPrime = true;
			for (long long k = 2; k * k <= j; k++) {
				if (j % k == 0) {
					isPrime = false;
					break;
				}
			}
			if (isPrime) {
				cout << j << '\n';
				break;
			}
		}
	}
}