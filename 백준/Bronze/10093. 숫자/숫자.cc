#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	unsigned long long n1, n2;

	cin >> n1 >> n2;

	unsigned long long min_n = min(n1, n2);
	unsigned long long max_n = max(n1, n2);
	if (max_n - min_n < 2) {
		cout << 0;
	}
	else {
		cout << max_n - min_n - 1 << '\n';
	}
	for (unsigned long long i = min_n + 1; i < max_n; i++) {
		cout << i << ' ';
	}
}