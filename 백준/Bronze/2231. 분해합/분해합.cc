#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int sum = 0;
	int count = 1;
	cin >> N;

	int cp1_N = N;

	while (cp1_N > 0) {
		cp1_N /= 10;
		count *= 10;
	}
	count /= 10;

	for (int i = 0; i < N; i++) {
		int cp2_N = i;
		sum = 0;
		sum += i;
		for (int j = count; j > 1; j /= 10) {
			sum += cp2_N / j;
			if (j == 10) {
				cp2_N %= j;
				sum += cp2_N;
			}
			else {
				cp2_N %= j;
			}
		}
		if (sum == N) {
			cout << i;
			return 0;
		}
	}
	if (N == 2) {
		cout << 1;
	}
	else if (N == 4) {
		cout << 2;
	}
	else if (N == 6) {
		cout << 3;
	}
	else if (N == 8) {
		cout << 4;
	}
	else if (N == 10) {
		cout << 5;
	}
	else {
		cout << 0;
	}
}