#include <iostream>
#include <algorithm>
using namespace std;

int arr[10003];
int dp[10003][4];
int n;
int ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1][1] = arr[1];
	dp[2][0] = arr[1];
	dp[2][1] = arr[2];
	dp[2][2] = arr[1] + arr[2];
	dp[3][0] = arr[1] + arr[2];
	dp[3][1] = arr[1] + arr[3];
	dp[3][2] = arr[2] + arr[3];

	for (int i = 4; i <= n; i++) {
		for (int j = 0; j <= 2; j++) {
			if (j == 0) {
				dp[i][j] = max({ dp[i - 1][2], dp[i - 2][2], dp[i - 2][1] });
				ans = max(ans, dp[i][j]);
			}
			else if (j == 1) {
				dp[i][j] = max({ dp[i - 2][1] + arr[i], dp[i - 2][2] + arr[i], dp[i - 1][0] + arr[i]});
				ans = max(ans, dp[i][j]);
			}
			else {
				dp[i][j] = dp[i - 1][1] + arr[i];
				ans = max(ans, dp[i][j]);
			}
		}
	}

	if (n == 1) {
		cout << arr[1];
		return 0;
	}
	else if (n == 2) {
		cout << arr[1] + arr[2];
		return 0;
	}
	else if (n == 3) {
		cout << max({ dp[2][2], dp[3][1], dp[3][2] });
		return 0;
	}

	cout << ans;
}