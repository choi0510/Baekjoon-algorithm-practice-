#include <iostream>
#include <algorithm>
using namespace std;

int dp[1003][1003];
int n, m;
int ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string num;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> num;
		for (int j = 1; j <= m; j++) {
			dp[i][j] = num[j - 1] - '0';
			ans = max(ans, dp[i][j]);
		}
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 2; j <= m; j++) {

			if (dp[i][j] == 0) {
				continue;
			}
			
			if (dp[i - 1][j - 1] == 0 || dp[i][j - 1] == 0 || dp[i - 1][j] == 0) {
				continue;
			}
			else if (dp[i - 1][j - 1] > 0 && dp[i][j - 1] > 0 && dp[i - 1][j] > 0) {
				if ((dp[i - 1][j - 1] == dp[i][j - 1]) && (dp[i - 1][j] == dp[i][j - 1]) && (dp[i - 1][j - 1] == dp[i - 1][j])) {
					dp[i][j] = dp[i - 1][j - 1] + 1;
					ans = max(ans, dp[i][j]);
				}
				else {
					dp[i][j] = min({ dp[i - 1][j - 1], dp[i][j - 1], dp[i - 1][j] }) + 1;
					ans = max(ans, dp[i][j]);
				}
			}
		}
	}

	cout << ans * ans;
}