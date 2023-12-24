#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int sum = 0;
	int min_n = 99;

	for (int i = 0; i < 7; i++) {
		cin >> n;
		if (n % 2 == 0) {
			continue;
		}
		else {
			sum += n;
			min_n = min(min_n, n);
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << '\n' << min_n;
	}
}