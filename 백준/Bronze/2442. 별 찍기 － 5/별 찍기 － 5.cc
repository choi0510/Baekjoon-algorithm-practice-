#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = N; i > 0; i--) {
		for (int j = (i * 2 - 1) / 2; j > 0; j--) {
			cout << ' ';
		}
		for (int k = N - i; k < (N-i)*2 + 1 + (N - i); k++) {
			cout << '*';
		}
		cout << '\n';
	}
}