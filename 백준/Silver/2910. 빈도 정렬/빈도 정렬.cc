#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <map>
#include <functional>
#include <string>
using namespace std;

map<int, int> order;

bool compare(const pair<int, int> &p1,const pair<int, int> &p2) {
	if (p1.second == p2.second) {
		return order[p1.first] < order[p2.first];
	}
	return p1.second > p2.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, C;
	int num;
	cin >> N >> C;
	unordered_map<int, int> m;
	

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (m.find(num) == m.end()) {
			m.insert({ num, 1 });
		}
		else {
			m[num]++;
		}

		if (order[num] == 0) {
			order[num] = i + 1;
		}
	}

	vector<pair<int, int>> v(m.begin(), m.end());

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		int count = v[i].second;
		while (count--) {
			cout << v[i].first << ' ';
		}
	}
}