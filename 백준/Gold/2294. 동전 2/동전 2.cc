#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int dp[10003];
vector<int> coin;
int n, k;
int value;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> value;
		if (find(coin.begin(), coin.end(), value) != coin.end()) {
			continue;
		}
		coin.push_back(value);
	}

	sort(coin.begin(), coin.end());

	for (int i = 0; i < coin.size(); i++) {
		int key = coin[i];
		if (key > 10000) {
			continue;
		}
		dp[key] = 1;
	}

	for (int i = 1; i <= k; i++) {

		if (dp[i] == 1) {
			continue;
		}

		dp[i] = 10001;
		for (int j = 0; j < coin.size(); j++) {
			if (i < coin[j]) {
				break;
			}
			else {
				dp[i] = min(dp[i], dp[i - coin[j]] + 1);
			}
		}
	}

	if (dp[k] == 10001) {
		cout << -1;
	}
	else {
		cout << dp[k];
	}
}