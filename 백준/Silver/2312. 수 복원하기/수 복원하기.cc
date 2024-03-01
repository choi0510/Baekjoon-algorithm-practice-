#include <iostream>
#include <vector>
using namespace std;

int arr[100003];
vector<int> v1;
vector<int> v2;
int T, N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count;

	for (int i = 2; i <= 100000; i++) {
		arr[i] = i;
	}

	for (int i = 2; i * i <= 100000; i++) {
		if (arr[i] == 0) {
			continue;
		}
		for (int j = i * 2; j <= 100000; j += i) {
			arr[j] = 0;
		}
	}

	cin >> T;

	while (T--) {
		cin >> N;
		count = 0;
		int key = N;
		for (int i = 2; i <= N; i++) {

			if (key == 1) {
				break;
			}

			if (arr[i] != 0) {

				if (key % arr[i] != 0) {
					continue;
				}

				while (key % arr[i] == 0) {
					key /= arr[i];
					count++;
				}

				cout << arr[i] << ' ' << count << '\n';
				count = 0;
			}
		}
	}
}