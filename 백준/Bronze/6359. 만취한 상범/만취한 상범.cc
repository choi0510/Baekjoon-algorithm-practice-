#include <iostream>
using namespace std;

int arr[103];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int room;
	int count = 0;

	cin >> T;

	for (int i = 1; i <= 100; i++) {
		count = 0;
		for (int j = 1; j <= i; j++) {
			if (i % j == 0) {
				count++;
			}
		}
		arr[i] = count;
		if (arr[i] % 2 == 0) {
			arr[i] = 0;
		}
		else {
			arr[i] = 1;
		}
	}

	int sum = 0;

	while (T--) {
		cin >> room;
		sum = 0;

		for (int i = 1; i <= room; i++) {
			sum += arr[i];
		}

		cout << sum << '\n';
	}
}