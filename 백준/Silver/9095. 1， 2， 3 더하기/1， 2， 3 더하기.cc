#include <iostream>
using namespace std;

int arr[12];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int num;
	arr[1] = 1;
	arr[2] = 2;
	arr[3] = 4;

	for (int i = 4; i < 11; i++) {
		arr[i] = arr[i - 3] + arr[i - 2] + arr[i - 1];
	}

	cin >> T;

	while (T--) {
		cin >> num;
		cout << arr[num] << '\n';
	}
}