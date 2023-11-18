#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int compare(pair<int, int> p1, pair<int, int> p2) {
	return p1.second < p2.second;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	int count = 0;
	vector<pair<int, int>> v;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(make_pair(num, i));
	}

	sort(v.begin(), v.end());

	for (int i = 0; ; i++, count++) {
		if (i == N - 1) {
			v[i].first = count;
			break;
		}
		else if (v[i].first == v[i + 1].first) {
			v[i].first = count;
			count--;
		}
		else {
			v[i].first = count;
		}
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i].first << ' ';
	}
}