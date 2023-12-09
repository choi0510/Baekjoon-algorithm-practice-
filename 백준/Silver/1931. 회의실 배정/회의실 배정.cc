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
	int n1, n2;
	int count = 1;
	vector<pair<int, int>> v;

	cin >> N;

	if (N == 1) {
		cout << 1;
		return 0;
	}

	for (int i = 0; i < N; i++) {
		cin >> n1 >> n2;
		v.push_back({ n1, n2 });
	}
	sort(v.begin(), v.end(), compare);

	int st = v[0].first; // 1
	int end = v[0].second; // 4

	for (int i = 1; i < N; i++) {
		if (v[i].first < end) {
			continue;
		}
		else {
			st = v[i].first;
			end = v[i].second;
			count++;
		}
	}
	cout << count;
}