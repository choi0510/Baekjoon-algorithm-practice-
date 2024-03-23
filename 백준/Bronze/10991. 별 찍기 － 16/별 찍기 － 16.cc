#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = n - i - 1; j > 0; j--) {
			cout << ' ';
		}
		for (int k = n - i; k <= n; k++) {
			cout << "* ";
		}
		cout << '\n';
	}
}