#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int EggCount = 0;
int EggCountMin = 0;
vector<pair<int, int>> v(10, {0, 0});

void backtracking(int k) {

	if (k == N) {
		EggCount = 0;
		for (int i = 0; i < N; i++) {
			if (v[i].first <= 0) {
				EggCount++;
			}
		}
		EggCountMin = max(EggCountMin, EggCount);
		return;
	}

	if (v[k].first <= 0) {
		backtracking(k + 1);
	}
	else {
		bool check = false;
		for (int i = 0; i < N; i++) {
			if (k != i && v[i].first >= 1) {

				v[k].first -= v[i].second;
				v[i].first -= v[k].second;

				check = true;
				backtracking(k + 1);

				v[k].first += v[i].second;
				v[i].first += v[k].second;
			}
		}

		if (!check) {
			backtracking(N);
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int s, w;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> s >> w;
		v[i].first = s;
		v[i].second = w;
	}

	backtracking(0);

	cout << EggCountMin;
}