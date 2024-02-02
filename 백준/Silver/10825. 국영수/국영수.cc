#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(const pair<pair<string, int>, pair<int, int>> &p1, const pair<pair<string, int>, pair<int, int>>& p2) {
	if (p1.first.second == p2.first.second) {
		if (p1.second.first == p2.second.first) {
			if (p1.second.second == p2.second.second) {
				return p1.first.first < p2.first.first;
			}
			else {
				return p1.second.second > p2.second.second;
			}
		}
		else {
			return p1.second.first < p2.second.first;
		}
	}
	else {
		return p1.first.second > p2.first.second;
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string name;
	int n1, n2, n3;
	vector<pair<pair<string, int>, pair<int, int>>> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> name >> n1 >> n2 >> n3;
		v.push_back({ {name, n1}, {n2, n3} });
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i].first.first << '\n';
	}
}