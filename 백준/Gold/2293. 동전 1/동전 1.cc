#include <iostream>
using namespace std;

int dp[10003];
int arr[103];
int n, k;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = arr[i]; j <= k; j++) {
			dp[j] += dp[j - arr[i]];
		}
	}

	cout << dp[k];
}