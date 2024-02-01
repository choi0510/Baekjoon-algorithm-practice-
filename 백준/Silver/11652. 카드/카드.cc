#include <iostream>
#include <algorithm>
using namespace std;

long long arr[100003];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i]; 
	}

	sort(arr, arr + N);

	long long minInt = -1;
	int x = 62;
	while (x--) {
		minInt *= 2;
	}
	minInt--;

	int cnt = 0;
	int maxCnt = 0;

	for (int i = 0; i < N; i++) {
		if (i == 0 || arr[i - 1] == arr[i]) {
			cnt++;
		}
		else {
			if (cnt > maxCnt) {
				maxCnt = cnt;
				minInt = arr[i - 1];
			}
			cnt = 1;
		}
	}

	if (cnt > maxCnt) {
		minInt = arr[N - 1];
	}

	cout << minInt;
}