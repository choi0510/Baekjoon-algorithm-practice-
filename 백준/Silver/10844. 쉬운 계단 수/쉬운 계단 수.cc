#include <iostream>
using namespace std;

long long dp[103][10];
int N;
long long sum;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i <= 9; i++) {
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++) {
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				dp[i][j] = dp[i - 1][1] % 1000000000;
			}
			else if (j == 9) {
				dp[i][j] = dp[i - 1][8] % 1000000000;
			}
			else {
				dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
			}
		}
	}

	for (int i = 0; i <= 9; i++) {
		sum += dp[N][i] % 1000000000;
	}

	cout << sum % 1000000000;
}