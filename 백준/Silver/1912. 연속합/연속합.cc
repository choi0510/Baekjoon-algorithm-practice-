#include <iostream>
#include <algorithm>
using namespace std;

int arr[100003];
int dp[100003];
int n;
int	maxInt;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	maxInt = dp[1];

	for (int i = 2; i <= n; i++) {
		dp[i] = max(dp[i - 1] + arr[i], arr[i]);
		maxInt = max(maxInt, dp[i]);
	}

	cout << maxInt;
}