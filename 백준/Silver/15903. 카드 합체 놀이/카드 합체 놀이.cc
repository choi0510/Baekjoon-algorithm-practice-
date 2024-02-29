#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long n, m;
long long num;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long ans = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < m; i++) {
		sort(v.begin(), v.end());
		long long sum = v[0] + v[1];
		v[0] = sum;
		v[1] = sum;
	}

	for (int i = 0; i < v.size(); i++) {
		ans += v[i];
	}

	cout << ans;
}