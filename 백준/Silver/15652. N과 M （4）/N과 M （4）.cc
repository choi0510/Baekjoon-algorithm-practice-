#include <iostream>
using namespace std;

int N, M;
int arr[10];

void backtracking(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N; i++) {
		if (k == 0) {
			arr[k] = i;
			backtracking(k + 1);
		}
		else {
			arr[k] = i;
			if (arr[k - 1] > arr[k]) {
				continue;
			}
			backtracking(k + 1);
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	backtracking(0);
}