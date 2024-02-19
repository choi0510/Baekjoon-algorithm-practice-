#include <iostream>
#include <cstring>
using namespace std;

int dp[10003];
int coin[23];
int T, N, M;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;

	while (T--) {

		dp[0] = 1;
		cin >> N;

		for (int i = 1; i <= N; i++) {
			cin >> coin[i];
		}

		cin >> M;

		for (int i = 1; coin[i] <= M; i++) {

			if (!coin[i]) break;

			for (int j = coin[i]; j <= M; j++) {
				dp[j] += dp[j - coin[i]];
			}
		}

		cout << dp[M] << '\n';

		memset(dp, 0, sizeof(dp));
		memset(coin, 0, sizeof(coin));
	}
}