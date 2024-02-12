#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<int, int>> v;
int N;
int sum = 0;

void ox(int day, int money) {
	if (day == N + 1) {
		sum = max(sum, money);
	}
	if (day >= N + 1) {
		return;
	}

	ox(day + v[day].first, money + v[day].second);
	ox(day + 1, money);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, P;

	cin >> N;
	
	v.push_back({ 0, 0 });

	for (int i = 1; i <= N; i++) {
		cin >> T >> P;
		v.push_back({ T, P });
	}

	ox(1, 0);

	cout << sum;
}