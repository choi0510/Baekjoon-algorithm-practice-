#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = n; i > 0; i--) {
		for (int j = i - 1; j > 0; j--) {
			cout << ' ';
		}
		for (int k = 0; k < n-i+1; k++) {
			cout << '*';
		}
		cout << '\n';
	}

	for (int i = n-1; i > 0; i--) {
		for (int j = 0; j < n-i; j++) {
			cout << ' ';
		}
		for (int k = i; k > 0; k--) {
			cout << '*';
		}
		cout << '\n';
	}
}