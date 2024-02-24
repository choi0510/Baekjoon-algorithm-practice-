#include <iostream>
using namespace std;

long long dp[1003][1003];
int N, K;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;

	for (int i = 4; i <= N; i++) {
		for (int j = i / 2; j >= 1; j--) {
			if (i % 2 == 0 && j == i / 2) {
				dp[i][j] = 2;
			}
			else if (i % 2 != 0 && j == i / 2) {
				dp[i][j] = i;
			}
			else if (j == 1) {
				dp[i][j] = i;
			}
			else {
				dp[i][j] = (dp[i - 1][j] + dp[i - 2][j - 1]) % 1000000003;
			}
		}
	}

	cout << dp[N][K] % 1000000003;
}