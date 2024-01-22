#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int real_arr[10];
int arr[10];
bool isused[10];

void backtracking(int k) {
	if (k == M) {
		for (int i = 0; i < M; i++) {
			cout << real_arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!isused[i]) {
			if (k == 0) {
				real_arr[k] = arr[i];
				isused[i] = true;
				backtracking(k + 1);
				isused[i] = false;
			}
			else {
				if (real_arr[k - 1] > arr[i]) {
					continue;
				}
				real_arr[k] = arr[i];
				isused[i] = true;
				backtracking(k + 1);
				isused[i] = false;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[i] = num;
	}

	sort(arr, arr + N);

	backtracking(0);
}