#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000003];
int path[1000003];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	dp[1] = 0;
	dp[2] = 1;
	dp[3] = 1;

	path[0] = 0;
	path[1] = 1;
	path[2] = 1;
	path[3] = 1;

	for (int i = 4; i <= N; i++) {
		dp[i] = dp[i - 1] + 1;
		path[i] = i - 1;

		if (i % 3 == 0) {
			int num3 = i / 3;
			dp[i] = min(dp[i], dp[num3] + 1);
			if (dp[i] == dp[num3] + 1) {
				path[i] = num3;
			}
		}
		if (i % 2 == 0) {
			int num2 = i / 2;
			dp[i] = min(dp[i], dp[num2] + 1);
			if (dp[i] == dp[num2] + 1) {
				path[i] = num2;
			}
		}
	}

	cout << dp[N] << '\n';
	if (N != 1 && N != 2 && N != 3) {
		cout << N << ' ';
		int i = N;
		while (true) {
			cout << path[i] << ' ';
			if (path[i] == 1) {
				break;
			}
			i = path[i];
		}
	}
	else if(N == 2 || N == 3) {
		cout << N << ' ' << 1;
	}
	else {
		cout << 1;
	}
}