#include <iostream>
using namespace std;

int dp[1033][1033];
int N, M;
int x1pos, y1pos, x2pos, y2pos;
int num;
int ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> num;
			if (j == 1) dp[i][j] = num;
			else {
				dp[i][j] = dp[i][j - 1] + num;
			}
		}
	}

	for (int i = 1; i <= M; i++) {
		ans = 0;
		cin >> x1pos >> y1pos >> x2pos >> y2pos;

		for (int j = x1pos; j <= x2pos; j++) {
			ans += dp[j][y2pos] - dp[j][y1pos - 1];
		}
		cout << ans << '\n';
	}
}