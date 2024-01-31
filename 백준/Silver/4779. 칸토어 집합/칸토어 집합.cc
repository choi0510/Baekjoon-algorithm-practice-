#include <iostream>
using namespace std;

int N;

void recursion(int n) {

	if (n == 1) {
		cout << '-';
		return;
	}

	int min = n / 3;
	int max = n - (n / 3);

	recursion(n / 3);
	for (int i = 1; i <= n; i++) {
		if (i > min && i < max + 1) {
			cout << ' ';
			continue;
		}
	}
	recursion(n / 3);

}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	while (cin >> N) {

		int num = 1;
		while (N--) {
			num *= 3;
		}

		recursion(num);
		cout << '\n';
	}
}