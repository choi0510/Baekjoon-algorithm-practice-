#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
long long num;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<long long> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());

	int ans = 0;

	for (int i = 0; i < N; i++) {
		int st = 0;
		int en = N - 1;
		while (st < en) {
			int key = v[st] + v[en];
			if (v[i] < key) en--;
			else if (v[i] > key) st++;
			else {
				if (st != i && en != i) {
					ans++;
					break;
				}
				else if (i == st) st++;
				else if (i == en) en--;
			}
		}
	}

	cout << ans;
}