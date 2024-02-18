#include <iostream>
#include <algorithm>
using namespace std;

int dp[100003][4];
int arr[100003][4];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	for (int t = 1; ; t++) {
		cin >> N;

		if (!N) {
			break;
		}

		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= 3; j++) {
				cin >> arr[i][j];
			}
		}

		dp[1][1] = arr[1][1];
		dp[1][2] = arr[1][2];
		dp[1][3] = dp[1][2] + arr[1][3];
		dp[2][1] = arr[1][2] + arr[2][1];
		dp[2][2] = min({ dp[2][1] + arr[2][2], dp[1][2] + arr[2][2], dp[1][3] + arr[2][2] });
		dp[2][3] = min({ dp[2][2] + arr[2][3], dp[1][2] + arr[2][3], dp[1][3] + arr[2][3] });

		for (int i = 3; i <= N; i++) {
			for (int j = 1; j <= 3; j++) {
				if (j == 1) {
					dp[i][j] = min(dp[i - 1][j] + arr[i][j], dp[i - 1][j + 1] + arr[i][j]);
				}
				else if (j == 2) {
					dp[i][j] = min({ dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j], dp[i - 1][j + 1] + arr[i][j], dp[i][j - 1] + arr[i][j] });
				}
				else {
					dp[i][j] = min({ dp[i - 1][j - 1] + arr[i][j], dp[i - 1][j] + arr[i][j], dp[i][j - 1] + arr[i][j] });
				}
			}
		}

		cout << t << ". " << dp[N][2] << '\n';
	}
}