#include <iostream>
#include <algorithm>
using namespace std;

int dp[1500003];
int T[1500003];
int P[1500003];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	
	for (int i = 1; i <= N; i++) {
		cin >> T[i] >> P[i];
	}

	for (int i = N; i >= 1; i--) {
		if (i + T[i] > N + 1) {
			dp[i] = dp[i + 1];
		}
		else {
			dp[i] = max(dp[i + 1], dp[i + T[i]] + P[i]);
		}
	}

	cout << dp[1];
}