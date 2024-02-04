#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[1001][3];
int home[1001][3];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int cost;
	cin >> N;

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> cost;
			home[i][j] = cost;
		}
	}

	dp[1][0] = home[1][0];
	dp[1][1] = home[1][1];
	dp[1][2] = home[1][2];

	for (int i = 2; i <= N; i++) {
		dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + home[i][0];
		dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + home[i][1];
		dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + home[i][2]; 
	}

	cout << min({ dp[N][0], dp[N][1], dp[N][2] });
}