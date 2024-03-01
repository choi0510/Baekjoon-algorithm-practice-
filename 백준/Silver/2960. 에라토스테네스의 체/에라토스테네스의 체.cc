#include <iostream>
using namespace std;

int N, K;
int arr[1003];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;

	cin >> N >> K;

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= N; i++) {
		if (arr[i] == 0) {
			continue;
		}
		count++;
		if (count == K) {
			cout << i;
			return 0;
		}
		for (int j = i * 2; j <= N; j += i) {
			if (arr[j] == 0) {
				continue;
			}
			arr[j] = 0;
			count++;
			if (count == K) {
				cout << j;
				return 0;
			}
		}
	}
}