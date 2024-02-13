#include <iostream>
using namespace std;

long long dp[1000003];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= N; i++) {
		dp[i] = (dp[i - 2] + dp[i - 1]) % 15746 ;
	}

	cout << dp[N] % 15746;
}