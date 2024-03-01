#include <iostream>
using namespace std;

int dp[1003][1003];
int N, K;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 1; i <= N; i++) {
		dp[i][0] = 1;
		dp[i][i] = 1;
		for (int j = 1; j < i; j++) {
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % 10007;
		}
	}

	cout << dp[N][K] % 10007;
}