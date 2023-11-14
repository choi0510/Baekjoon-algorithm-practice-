#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int sum = 0;
	int x = 3, y = 5;
	int cnt1, cnt2;

	cin >> N;
	cnt1 = N / x;
	cnt2 = N / y;

	for (int i = 0; i <= cnt1; i++) {
		for (int j = 0; j <= cnt2; j++) {
			if (3 * i + 5 * j == N) {
				sum += (i + j);
				break;
			}
		}
		if (sum > 0) {
			break;
		}
	}

	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum;
	}
}