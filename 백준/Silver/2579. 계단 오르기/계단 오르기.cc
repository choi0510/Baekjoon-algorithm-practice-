#include <iostream>
#include <algorithm>
using namespace std;

int N;
int sum;
int arr[301];
int dp[301];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	if (N == 1) {
		cout << arr[1];
		return 0;
	}
	else if (N == 2) {
		cout << arr[1] + arr[2];
		return 0;
	}
	else if (N == 3) {
		cout << max(arr[1] + arr[3], arr[2] + arr[3]);
		return 0;
	}

	dp[1] = arr[1];
	dp[2] = arr[1] + arr[2];
	dp[3] = max(arr[1] + arr[3], arr[2] + arr[3]);

	for (int i = 4; i <= N; i++) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i - 1] + arr[i]);
	}

	cout << dp[N];
}