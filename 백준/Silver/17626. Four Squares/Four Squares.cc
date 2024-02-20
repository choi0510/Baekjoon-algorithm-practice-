#include <iostream>
#include <algorithm>
using namespace std;

int dp[50003];
int n;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		dp[i] = i;
		for (int j = 1; j * j <= i; j++) {
			dp[i] = min(dp[i], dp[i - (j * j)] + 1);
		}
	}

	cout << dp[n];
}