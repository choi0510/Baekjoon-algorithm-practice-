#include <iostream>
using namespace std;

long long arr[1003][13];
long long dp[1003];
int N;
long long sum;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i <= 9; i++) {
		arr[1][i] = i;
		arr[2][i] = 10 - i;
	}

	dp[1] = 10;
	dp[2] = 55;

	for (int i = 3; i <= N; i++) {
		sum = 0;
		for (int j = 0; j <= 9; j++) {
			if (j == 0) {
				arr[i][j] = dp[i - 1] % 10007;
			}
			else {
				arr[i][j] = (arr[i][j - 1] - arr[i - 1][j - 1]) % 10007;
			}
			sum += arr[i][j] % 10007;
		}
		dp[i] = sum % 10007;
	}
	
	if (dp[N] < 0) {
		cout << dp[N] + 10007;
	}
	else {
		cout << dp[N] % 10007;
	}
}