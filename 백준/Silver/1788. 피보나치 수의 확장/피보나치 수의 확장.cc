#include <iostream>
using namespace std;

long long dp[2000010];
int n;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	dp[999998] = -1;
	dp[999999] = 1;
	dp[1000000] = 0;
	dp[1000001] = 1;
	dp[1000002] = 1;

	cin >> n;

	if (n > 0) {
		for (int i = 1000003; i <= 1000000 + n; i++) {
			dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000000;
		}
	}
	else if(n < 0) {
		for (int i = 999999; i >= 1000000 + n; i--) {
			dp[i] = (dp[i + 2] - dp[i + 1]) % -1000000000;
		}
	}

	int ans = dp[1000000 + n];

	if (ans > 0) {
		cout << 1 << '\n' << dp[1000000 + n];
	}
	else if (ans == 0) {
		cout << 0 << '\n' << 0;
	}
	else {
		cout << -1 << '\n' << -1 * dp[1000000 + n];
	}
}