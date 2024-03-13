#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N, M;
long long num;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	long long st = 0;
	long long en = 1;
	long long ans = 2000000003;
	while (st < N && en < N) {
		long long key = v[en] - v[st];
		if (key < M) {
			en++;
			continue;
		}
		else if (key == M) {
			cout << M;
			return 0;
		}

		ans = min(ans, key);
		st++;
	}

	cout << ans;
}