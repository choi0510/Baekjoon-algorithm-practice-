#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N, C;
long long house;
vector<long long> houses;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> C;

	for (int i = 0; i < N; i++) {
		cin >> house;
		houses.push_back(house);
	}

	sort(houses.begin(), houses.end());

	long long st = 1;
	long long en = houses[houses.size() - 1] - houses[0];
	long long ans = 1;
	while (st <= en) {
		long long count = 1;
		long long cur = 0;
		long long mid = (st + en) / 2;
		
		for (int i = 1; i < N; i++) {
			if (houses[i] - houses[cur] >= mid) {
				count++;
				cur = i;
			}

			if (count == C) break;
		}

		if (count >= C) {
			st = mid + 1;
			ans = max(ans, mid);
		}
		else {
			en = mid - 1;
		}
	}

	cout << ans;
}