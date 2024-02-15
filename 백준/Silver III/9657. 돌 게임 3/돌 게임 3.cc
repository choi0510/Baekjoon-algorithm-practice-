#include <iostream>
using namespace std;

int dp[1003];
int N;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	dp[1] = 1;
	dp[2] = 0; 
	dp[3] = 1;
	dp[4] = 1;

	for (int i = 5; i <= N; i++) {
		if (!dp[i - 1] || !dp[i - 3] || !dp[i - 4]) {
			dp[i] = 1;
		}
	}

	if (dp[N]) {
		cout << "SK";
	}
	else {
		cout << "CY";
	}
}