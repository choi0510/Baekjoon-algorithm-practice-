#include <iostream>
using namespace std;

long long dp[1000003];
int n;
int num;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	for (int i = 4; i <= 1000000; i++) {
		dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % 1000000009;
	}

	for (int i = 0; i < n; i++) {
		cin >> num;
		cout << dp[num] % 1000000009 << '\n';
	}
}