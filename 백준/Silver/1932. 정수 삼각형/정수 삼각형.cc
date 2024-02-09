#include <iostream>
#include <algorithm>
using namespace std;

int tri[503][503];
int ans[503][503];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int sum = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cin >> tri[i][j];
		}
	}

	ans[0][0] = tri[0][0];
	ans[1][0] = tri[0][0] + tri[1][0];
	ans[1][1] = tri[0][0] + tri[1][1];

	for (int i = 2; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if (j == 0) {
				ans[i][j] = ans[i - 1][j] + tri[i][j];
			}
			else {
				ans[i][j] = max(ans[i - 1][j - 1] + tri[i][j], ans[i - 1][j] + tri[i][j]);
			}
		}
	}

	for (int i = 0; i < n; i++) {
		sum = max(sum, ans[n - 1][i]);
	}

	cout << sum;
}