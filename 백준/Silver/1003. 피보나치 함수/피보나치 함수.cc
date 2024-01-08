#include <iostream>
using namespace std;

long long fib[42];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int N;

	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= 40; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	cin >> T;
	while (T--) {
		cin >> N;
		if (N == 0) {
			cout << 1 << ' ' << 0 << '\n';
		}
		else {
			cout << fib[N - 1] << ' ' << fib[N] << '\n';
		}
	}
}