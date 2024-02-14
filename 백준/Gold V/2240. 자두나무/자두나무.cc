#include <iostream>
#include <algorithm>
using namespace std;

int dp[5][33][1003];
int T, W;
int tree[1003];
int sum;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T >> W;
	
	for (int i = 1; i <= T; i++) {
		cin >> tree[i];
	}

	if (tree[1] == 2) {
		dp[1][0][1] = 0;
		dp[2][1][1] = 1;
	}
	else {
		dp[1][0][1] = 1;
		dp[2][1][1] = 0;
	} 

	for (int k = 2; k <= T; k++) {
		for (int j = 0; j <= W; j++) {
			for (int i = 1; i <= 2; i++) {

				if (i % 2 == 0 && j % 2 == 0) {
					continue;
				}
				else if (i % 2 == 1 && j % 2 == 1) {
					continue;
				}

				if (j == 0 && i == tree[k]) {
					dp[1][0][k] = dp[1][0][k - 1] + 1;
				}
				else if (j == 0 && i != tree[k]) {
					dp[1][0][k] = dp[1][0][k - 1];
				}

				if (j > 0 && j % 2 != 0 && i == tree[k]) {
					dp[i][j][k] = max(dp[i - 1][j - 1][k - 1], dp[i][j][k - 1]) + 1;
				}
				else if (j > 0 && j % 2 != 0 && i != tree[k]) {
					dp[i][j][k] = max(dp[i - 1][j - 1][k - 1], dp[i][j][k - 1]);
				}
				else if (j > 0 && j % 2 == 0 && i == tree[k]) {
					dp[i][j][k] = max(dp[i + 1][j - 1][k - 1], dp[i][j][k - 1]) + 1;
				}
				else if (j > 0 && j % 2 == 0 && i != tree[k]) {
					dp[i][j][k] = max(dp[i + 1][j - 1][k - 1], dp[i][j][k - 1]);
				}

				
			}
		}
	}

	for (int i = 1; i <= 2; i++) {
		for (int j = 0; j <= W; j++) {
			sum = max(sum, dp[i][j][T]);
		}
	}
	
	cout << sum;
}