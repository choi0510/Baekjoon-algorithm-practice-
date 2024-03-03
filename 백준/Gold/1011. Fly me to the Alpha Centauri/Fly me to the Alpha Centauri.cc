#include <iostream>
using namespace std;

long long T;
long long s, e;
long long ans;

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
			ans = (key - 1) * 2 - 1;
		}
		else if (e - s <= ((key - 1) * (key - 1) + (key * key)) / 2) {
			ans = (key - 1) * 2;
		}
		else {
			ans = (key * 2) - 1;
		}

		cout << ans << '\n';
	}
}