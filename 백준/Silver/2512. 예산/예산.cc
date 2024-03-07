#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
long long bu;
long long M;
long long ans;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> bu;
		v.push_back(bu);
	}
	cin >> M;

	sort(v.begin(), v.end());

	long long st = 0;
	long long en = v[v.size() - 1];
	long long sum = 0;
	while (st <= en) {
		sum = 0;
		long long mid = (st + en) / 2;

		for (int i = 0; i < N; i++) {
			if (v[i] > mid) {
				sum += mid;
			}
			else {
				sum += v[i];
			}
		}

		if (sum > M) {
			en = mid - 1;
		}
		else if(sum < M) {
			st = mid + 1;
			ans = max(ans, mid);
		}
		else {
			ans = mid;
			break;
		}
	}

	cout << ans;
}