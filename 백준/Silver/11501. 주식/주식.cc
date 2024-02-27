#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int N, stock;
long long ans;
long long sum;
int BigNum;
vector<int> days(1000003, 0);

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;

	cin >> T;

	while (T--) {

		sum = 0;
		ans = 0;
		count = 0;
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> stock;
			days[i] = stock;
		}

		for (int i = N - 1; i >= 0; i--) {
			if (i == N - 1) {
				BigNum = days[i];
			}
			else {
				BigNum = max(BigNum, days[i]);
				ans += BigNum - days[i];
			}
		}

		cout << ans << '\n';
		fill(days.begin(), days.end(), 0);
	}
}