#include <iostream>
using namespace std;

int dp[1003];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	dp[1] = 1;
	dp[2] = 3;
	dp[3] = 5;

	for (int i = 4; i <= N; i++) {
		dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
	}

	cout << dp[N] % 10007;
}