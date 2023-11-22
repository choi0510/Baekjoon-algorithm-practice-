#include <iostream>
using namespace std;

int fac(int num) {
	int result = 1;
	for (int i = 1; i <= num; i++) {
		result *= i;
	}
	return result;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	int up, down;
	int result;

	cin >> N >> K;

	up = fac(N);
	down = fac(K) * fac(N - K);

	result = up / down;
	cout << result;
}