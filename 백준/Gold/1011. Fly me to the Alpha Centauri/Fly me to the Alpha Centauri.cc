#include <iostream>
using namespace std;

long long T;
long long s, e;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;

	while (T--) {
		cin >> s >> e;
		
		long long key = 1;
		while (true) {
			if (key * key > e - s) {
				break;
			}
			key++;
		}

		if (e - s == (key - 1) * (key - 1)) {
			cout << (key - 1) * 2 - 1 << '\n';
		}
		else if (e - s <= ((key - 1) * (key - 1) + (key * key)) / 2) {
			cout << (key - 1) * 2 << '\n';
		}
		else {
			cout << (key * 2) - 1 << '\n';
		}
	}
}