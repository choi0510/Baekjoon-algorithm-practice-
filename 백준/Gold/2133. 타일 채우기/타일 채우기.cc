#include <iostream>
using namespace std;

long long dp[33];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	dp[2] = 3;
	dp[4] = 11;

	cin >> N;
	for (int i = 6; i <= N; i += 2) {
		dp[i] += dp[i - 2] * 3;
		for (int j = i - 4; j >= 2; j -= 2) {
			dp[i] += dp[j] * 2;
		}
		dp[i] += 2;
	}

	cout << dp[N];
}