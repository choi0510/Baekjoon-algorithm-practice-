#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[1003][1003];
string A, B;
vector<char> v;

void search(int keyNum, int y, int x) {

	if (!dp[y][x]) return;

	if (dp[y - 1][x] == keyNum) {
		search(keyNum, y - 1, x);
	}
	else if (dp[y][x - 1] == keyNum)
	{
		search(keyNum, y, x - 1);
	}
	else {
		v.push_back(B[y - 1]);
		search(keyNum - 1, y - 1, x - 1);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> A >> B;

	for (int i = 1; i <= B.size(); i++) {
		for (int j = 1; j <= A.size(); j++) {
			if (B[i - 1] != A[j - 1]) {
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
			}
			else {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
		}
	}

	int keyNum = dp[B.size()][A.size()];
	search(keyNum, B.size(), A.size());

	cout << dp[B.size()][A.size()] << '\n';
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}
}