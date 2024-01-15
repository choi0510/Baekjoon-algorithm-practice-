#include <iostream>
using namespace std;

int Z(int N, int r, int c) {
	if (N == 0) return 0;

	int key = N;
	int half = 1;
	while (key--) {
		half *= 2;
	}
	half /= 2;

	if (r < half && c < half) {
		return Z(N - 1, r, c);
	}
	else if (r < half && c >= half) {
		return (half * half) + Z(N - 1, r, c - half);
	}
	else if (r >= half && c < half) {
		return (2 * half * half) + Z(N - 1, r - half, c);
	}
	else {
		return (3 * half * half) + Z(N - 1, r - half, c - half);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, r, c;
	cin >> N >> r >> c;

	cout << Z(N, r, c);
}