#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

bool compare(pair<string, int> p1, pair<string, int> p2) {
	
	if (p1.second == p2.second) {
		if (p1.first.size() == p2.first.size()) {
			return p1.first < p2.first;
		}
		else {
			return p1.first.size() > p2.first.size();
		}
	}
	else {
		return p1.second > p2.second;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	map<string, int> m;
	string w;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> w;
		if (w.size() < M) {
			continue;
		}
		m.insert({w, 0});
		m[w]++;
	}

	vector<pair<string, int>> v(m.begin(), m.end());
	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first << '\n';
	}
}