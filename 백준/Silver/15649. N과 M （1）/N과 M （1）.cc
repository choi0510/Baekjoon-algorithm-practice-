#include <iostream>
using namespace std;

int N, M;
int arr[10];
bool isused[10];

void backtracking(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
	}

	for (int i = 1; i <= N; i++) {
		if (!isused[i]) {
			arr[k] = i;
			isused[i] = true;
			backtracking(k + 1);
			isused[i] = false;
		}
	}
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	backtracking(0);
}