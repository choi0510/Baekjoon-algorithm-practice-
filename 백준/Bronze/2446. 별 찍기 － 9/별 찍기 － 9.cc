#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = N - 1; i > 0; i--) {
		for (int k = N - i - 1; k > 0; k--) {
			cout << ' ';
		}
		for (int j = (i * 2) + 1; j > 0; j--) {
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = 0; i < N; i++) {
		for (int k = N - i - 1; k > 0; k--) {
			cout << ' ';
		}
		for (int j = (i * 2) + 1; j > 0; j--) {
			cout << '*';
		}
		cout << '\n';
	}
}