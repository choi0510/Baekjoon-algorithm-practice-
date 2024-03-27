#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int N, K;
int weight, price;
int max_weight;
multiset<int> bag;

bool compare(pair<int, int>& p1, pair<int, int>& p2) {
	return p1.second > p2.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> K;

	vector<pair<int, int>> Gems;
	for (int i = 0; i < N; i++) {
		cin >> weight >> price;
		Gems.push_back({ weight, price });
	}

	sort(Gems.begin(), Gems.end(), compare);

	for (int i = 0; i < K; i++) {
		cin >> max_weight;
		bag.insert({ max_weight });
	}

	long long ans = 0;
	for (int i = 0; i < N; i++) {
		int w = Gems[i].first;
		int p = Gems[i].second;
		auto iter = bag.lower_bound(w);
		if (iter == bag.end()) {
			continue;
		}
		ans += p;
		bag.erase(iter);
	}

	cout << ans;
}