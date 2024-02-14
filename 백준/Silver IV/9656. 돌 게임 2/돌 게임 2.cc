#include <iostream>
#include <algorithm>
using namespace std;

int dp[1003][3];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	if (N == 1) {
		cout << "CY";
	}

	dp[1][1] = 1;
	dp[1][2] = 3;

	for (int i = 2; i <= N; i++) {
		for (int j = 1; j <= 2; j++) {
			if (j == 1) {
				if (dp[i - 1][j] + 1 > N && dp[i - 1][j + 1] + 1 > N) {
					continue;
				}
				else if (dp[i - 1][j] + 1 > N) {
					dp[i][j] = dp[i - 1][j + 1] + 1;
				}
				else if (dp[i - 1][j + 1] + 3 > N) {
					dp[i][j] = dp[i - 1][j] + 1;
				}
				else {
					dp[i][j] = max(dp[i - 1][j] + 1, dp[i - 1][j + 1] + 1);
				}
			}
			else {
				if (dp[i - 1][j - 1] + 3 > N && dp[i - 1][j] + 3 > N) {
					continue;
				}
				else if (dp[i - 1][j - 1] + 3 > N) {
					dp[i][j] = dp[i - 1][j + 1] + 3;
				}
				else if (dp[i - 1][j] + 3 > N) {
					dp[i][j] = dp[i - 1][j] + 3;
				}
				else {
					dp[i][j] = max(dp[i - 1][j - 1] + 3, dp[i - 1][j] + 3);
				}
			}

			if (dp[i][j] == N) {
				if (i % 2 == 0) {
					cout << "SK";
					return 0;
				}
				else {
					cout << "CY";
					return 0;
				}
			}
		}
	}
}