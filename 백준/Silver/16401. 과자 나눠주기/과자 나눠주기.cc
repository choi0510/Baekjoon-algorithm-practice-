#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long M, N;
long long L;
vector<long long> v1;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> M >> N;

	for (int i = 0; i < N; i++) {
		cin >> L;
		v1.push_back(L);
	}

	sort(v1.begin(), v1.end());

	long long st = 1;
	long long en = v1[v1.size() - 1];
	long long ans = 0;
	while (st <= en) {
		long long mid = (st + en) / 2;
		int key = 0;
		for (int i = 0; i < N; i++) {
			key += v1[i] / mid;
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