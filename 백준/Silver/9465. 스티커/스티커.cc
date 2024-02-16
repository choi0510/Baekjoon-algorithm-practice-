#include <iostream>
#include <algorithm>
using namespace std;

int dp[3][100003];
int arr[3][100003];
int T;
int n;
int sum;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;
	
	for (int i = 0; i < T; i++) {
		cin >> n;

		sum = 0;

		for (int k = 1; k <= 2; k++) {
			for (int j = 1; j <= n; j++) {
				cin >> arr[k][j];
			}
		}

		dp[1][1] = arr[1][1];
		dp[2][1] = arr[2][1];
		dp[1][2] = arr[2][1] + arr[1][2];
		dp[2][2] = arr[1][1] + arr[2][2];

		for (int j = 3; j <= n; j++) {
			for (int k = 1; k <= 2; k++) {
				if (k == 1) {
					dp[1][j] = max(dp[2][j - 2] + arr[1][j], dp[2][j - 1] + arr[1][j]);
					sum = max(sum, dp[1][j]);
				}
				else {
					dp[2][j] = max(dp[1][j - 2] + arr[2][j], dp[1][j - 1] + arr[2][j]);
					sum = max(sum, dp[2][j]);
				}
			}
		}

		if (n == 1) {
			cout << max(dp[1][1], dp[2][1]) << '\n';
		}
		else if (n == 2) {
			cout << max(dp[1][2], dp[2][2]) << '\n';
		}
		else {
			cout << sum << '\n';
		}
	}
}