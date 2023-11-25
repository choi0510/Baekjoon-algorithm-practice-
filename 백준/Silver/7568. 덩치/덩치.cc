#include <iostream>
#include <vector>
#include <tuple>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int x, y;
	vector<tuple<int, int, int>> t;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		t.push_back({x, y, 0});
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (get<0>(t[i]) < get<0>(t[j]) && get<1>(t[i]) < get<1>(t[j])) {
				get<2>(t[i])++;
			}
		}
	}

	for (auto item : t) {
		cout << get<2>(item) + 1 << ' ';
	}
}