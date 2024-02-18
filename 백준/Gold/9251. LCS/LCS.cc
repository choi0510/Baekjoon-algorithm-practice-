#include <iostream>
#include <algorithm>
using namespace std;

int dp[1003][1003];
int length;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	string A, B;

	cin >> A >> B;

	for (int i = 1; i <= B.size(); i++) {
		for (int j = 1; j <= A.size(); j++) {
			if (B[i - 1] != A[j - 1]) {
				dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
				length = max(length, dp[i][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j - 1] + 1;
				length = max(length, dp[i][j]);
			}
		}
	}

	cout << length;
}