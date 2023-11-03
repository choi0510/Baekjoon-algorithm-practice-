#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int X;
	int sum = 1;
	int count = 2;
	int bunsu;
	int bunmo;
	cin >> X;

	for (int i = 2; ;i++) {
		if (X > sum) {
			sum += i;
			count++;
		}
		else {
			break;
		}
	}

	if (count % 2 == 1) {
		bunmo = (sum - X) + 1;
		bunsu = count - bunmo;
	}
	else {
		bunsu = (sum - X) + 1;
		bunmo = count - bunsu;
	}

	cout << bunsu << '/' << bunmo;
}