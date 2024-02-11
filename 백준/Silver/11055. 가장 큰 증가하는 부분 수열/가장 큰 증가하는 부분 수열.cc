#include <iostream>
#include <algorithm>
using namespace std;

int arr[1003];
int dp[1003];
int N;
int maxInt;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	maxInt = dp[1];
	for (int i = 2; i <= N; i++) {
		dp[i] = arr[i];
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] < arr[i] && dp[i] < dp[j] + arr[i]) {
				dp[i] = dp[j] + arr[i];
			}
		}
		maxInt = max(dp[i], maxInt);
	}

	cout << maxInt;
}