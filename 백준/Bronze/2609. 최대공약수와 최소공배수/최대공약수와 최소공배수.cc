#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1, n2;
	int M = 0;

	cin >> n1 >> n2;

	if (n1 > n2) {
		for (int i = n2; i > 0; i--) {
			if (n1 % i == 0 && n2 % i == 0) {
				M = i;
				break;
			}
		}
	}
	else {
		for (int i = n1; i > 0; i--) {
			if (n1 % i == 0 && n2 % i == 0) {
				M = i;
				break;
			}
		}
	}

	cout << M << '\n';

	for (int i = M; ;i += M) {
		if (i >= n1 && i >= n2) {
			if (i % n1 == 0 && i % n2 == 0) {
				cout << i;
				break;
			}
		}
	}
}