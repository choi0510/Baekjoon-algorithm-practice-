#include <iostream>
using namespace std;

int T;
int M, N, x, y;
bool isR;

int gcd(int a, int b) {
	if (a == 0) return b;
	return gcd(b % a, a);
}

int lcm(int a, int b) {
	return (a / gcd(a, b)) * b;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;

	while (T--) {
		isR = false;
		cin >> M >> N >> x >> y;
		int LCM = lcm(M, N);
		for (int i = x; i <= LCM; i += M) {
			/*int key = i % N;
			if (key == 0) {
				key = N;
			}
			if (key == y) {
				cout << i << '\n';
				isR = true;
				break;
			}*/

			if ((i - y) % N == 0) {
				cout << i << '\n';
				isR = true;
				break;
			}

		}
		if (!isR) {
			cout << -1 << '\n';
		}
	}
}