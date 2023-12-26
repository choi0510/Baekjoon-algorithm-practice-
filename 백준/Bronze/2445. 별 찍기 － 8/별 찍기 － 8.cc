#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = 1; i <= N - 1; i++) {
		for (int j = i; j > 0; j--) {
			cout << '*';
		}
		for (int k = (N - i) * 2; k > 0; k--) {
			cout << ' ';
		}
		for (int l = i; l > 0; l--) {
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = N; i > 0; i--) {
		for (int j = i; j > 0; j--) {
			cout << '*';
		}
		for (int k = (N - i) * 2; k > 0; k--) {
			cout << ' ';
		}
		for (int l = i; l > 0; l--) {
			cout << '*';
		}
		cout << '\n';
	}
}