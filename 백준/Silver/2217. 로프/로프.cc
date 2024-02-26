#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int rope;
int ans;
vector<int> ropes;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> rope;
		ropes.push_back(rope);
	}

	sort(ropes.begin(), ropes.end(), greater<int>());

	for (int i = 0; i < N; i++) {
		ans = max(ans, ropes[i] * (i + 1));
	}

	cout << ans;
}