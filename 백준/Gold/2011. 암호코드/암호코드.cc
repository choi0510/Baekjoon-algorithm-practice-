#include <iostream>
using namespace std;

long long dp[5003];
string num;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> num;

	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 3;

	for (int i = 0; i < num.size(); i++) {

		if (i == 0 && num[i] != '0') {
			continue;
		}
		
		if (num[i] == '0') {
			if (i == 0) {
				cout << 0;
				return 0;
			}
			else if (num[i - 1] == '1' || num[i - 1] == '2') {
				dp[i] = dp[i - 1];
			}
			else if ((num[i - 1] - '0') >= 3 && (num[i - 1] - '0') <= 9) {
				cout << 0;
				return 0;
			}
		}
		else if(num[i] == '7' || num[i] == '8' || num[i] == '9') {
			if (num[i - 1] == '0') {
				dp[i] = dp[i - 1];
			}
			else if ((num[i - 1] - '0') >= 2 && (num[i - 1] - '0') <= 9) {
				dp[i] = dp[i - 1];
			}
			else {
				if (i == 1) {
					dp[i] = 2;
				}
				else {
					dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000;
				}
			}
		}
		else {
			if (num[i - 1] == '0') {
				dp[i] = dp[i - 1];
			}
			else if (i != num.size() - 1 && num[i + 1] == '0') {
				dp[i] = dp[i - 1];
			}
			else if ((num[i - 1] - '0') >= 3 && (num[i - 1] - '0') <= 9) {
				dp[i] = dp[i - 1];
			}
			else {
				if (i == 1) {
					dp[i] = 2;
				}
				else {
					dp[i] = (dp[i - 2] + dp[i - 1]) % 1000000;
				}
			}
		}
	}

	cout << dp[num.size() - 1] % 1000000;
}