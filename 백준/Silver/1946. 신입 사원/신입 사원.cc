#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T, N;
int paper, talk;
vector<pair<int, int>> v(100003);

int compare1(pair<int, int> p1, pair<int, int> p2) {
	return p1.first < p2.first;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;
	int key = 0;

	cin >> T;

	while (T--) {
		count = 1;
		key = 0;
		cin >> N;

		for (int i = 0; i < N; i++) {
			cin >> paper >> talk;
			v[i].first = paper;
			v[i].second = talk;
		}

		sort(v.begin(), v.begin() + N, compare1);
		for (int i = 1; i < N; i++) {
			if (v[key].second > v[i].second) {
				count++;
				key = i;
			}
		}

		cout << count << '\n';
	}
}