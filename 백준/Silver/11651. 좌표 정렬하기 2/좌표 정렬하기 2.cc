#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int, int> p1, pair<int, int> p2) {
	if (p1.second == p2.second) {
		return p1.first < p2.first;
	}
	else {
		return p1.second < p2.second;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int x, y;
	vector<pair<int, int>> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}