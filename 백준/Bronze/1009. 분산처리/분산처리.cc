#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	string a;
	int b;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		int last_num = a[a.size() - 1] - '0';
		if (last_num == 1 || last_num == 5 || last_num == 6) {
			cout << last_num << '\n';
		}
		else if (last_num == 2) {
			if (b % 4 == 1) {
				cout << 2 << '\n';
			}
			else if (b % 4 == 2) {
				cout << 4 << '\n';
			}
			else if (b % 4 == 3) {
				cout << 8 << '\n';
			}
			else if (b % 4 == 0) {
				cout << 6 << '\n';
			}
		}
		else if (last_num == 3) {
			if (b % 4 == 1) {
				cout << 3 << '\n';
			}
			else if (b % 4 == 2) {
				cout << 9 << '\n';
			}
			else if (b % 4 == 3) {
				cout << 7 << '\n';
			}
			else if (b % 4 == 0) {
				cout << 1 << '\n';
			}
		}
		else if (last_num == 4) {
			if (b % 2 == 1) {
				cout << 4 << '\n';
			}
			else if (b % 2 == 0) {
				cout << 6 << '\n';
			}
		}
		else if (last_num == 7) {
			if (b % 4 == 1) {
				cout << 7 << '\n';
			}
			else if (b % 4 == 2) {
				cout << 9 << '\n';
			}
			else if (b % 4 == 3) {
				cout << 3 << '\n';
			}
			else if (b % 4 == 0) {
				cout << 1 << '\n';
			}
		}
		else if (last_num == 8) {
			if (b % 4 == 1) {
				cout << 8 << '\n';
			}
			else if (b % 4 == 2) {
				cout << 4 << '\n';
			}
			else if (b % 4 == 3) {
				cout << 2 << '\n';
			}
			else if (b % 4 == 0) {
				cout << 6 << '\n';
			}
		}
		else if (last_num == 9) {
			if (b % 2 == 1) {
				cout << 9 << '\n';
			}
			else if (b % 2 == 0) {
				cout << 1 << '\n';
			}
		}
		else {
			cout << 10 << '\n';
		}
	}
}