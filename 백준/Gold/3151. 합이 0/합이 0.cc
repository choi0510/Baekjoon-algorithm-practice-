#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int num;
vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	long long ans = 0;

	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			int key = -1 * (v[i] + v[j]);
			int uppper_key = upper_bound(v.begin() + j + 1, v.end(), key) - v.begin();
			int lower_key = lower_bound(v.begin() + j + 1, v.end(), key) - v.begin();
			ans += uppper_key - lower_key;
		}
	}

	cout << ans;
}