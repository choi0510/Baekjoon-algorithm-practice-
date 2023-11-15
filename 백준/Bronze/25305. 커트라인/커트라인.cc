#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, k;
	int x;
	vector<int> v;

	cin >> N >> k;
	
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());

	cout << v[N - k];
}