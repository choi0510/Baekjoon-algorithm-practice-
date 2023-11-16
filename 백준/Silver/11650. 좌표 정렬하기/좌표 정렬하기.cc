#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

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

	sort(v.begin(), v.end());

	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ' << v[i].second << '\n';
	}
}