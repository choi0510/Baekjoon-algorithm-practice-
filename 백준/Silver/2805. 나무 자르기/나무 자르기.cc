#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N, M;
long long L;
vector<long long> tree;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> L;
		tree.push_back(L);
	}

	sort(tree.begin(), tree.end());

	long long st = 1;
	long long en = tree[tree.size() - 1];
	long long ans = 0;

	while (st <= en) {
		long long key = 0;
		long long mid = (st + en) / 2;
		for (long long i = 0; i < N; i++) {
			if (tree[i] - mid > 0) {
				key += tree[i] - mid;
			}
			else {
				continue;
			}
		}

		if (key >= M) {
			ans = mid;
			st = mid + 1;
		}
		else {
			en = mid - 1;
		}
	}

	cout << ans;
}