#include <iostream>
using namespace std;

int n;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	if (n % 5 == 0) {
		cout << n / 5;
		return 0;
	}

	int key = n / 5;
	int num = (n - (5 * key)) % 2;
	
	while (num != 0) {
		if (key == 0) {
			cout << -1;
			return 0;
		}
		key -= 1;
		num = (n - (5 * key)) % 2;
	}

	cout << key + ((n - (5 * key)) / 2);
}