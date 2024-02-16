#include <iostream>
#include <algorithm>
using namespace std;

int dp[1003];
int arr[1003];
int N;
int ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = max(arr[2], arr[1] * 2);

	for (int i = 3; i <= N; i++) {
		dp[i] = arr[i];
		int key = i;
		for (int j = key - 1; j >= key / 2; j--) {
			dp[i] = max(dp[i], dp[j] + dp[i - j]);
			ans = max(ans, dp[i]);
		}
	}

	if (N == 1) {
		cout << arr[1];
	}
	else if (N == 2) {
		cout << max(arr[2], arr[1] * 2);
	}
	else {
		cout << ans;
	}
}