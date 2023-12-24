#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<int> v;

	for (int i = 0; i < 3; i++) {
		cin >> n;
		v.push_back(n);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < 3; i++) {
		cout << v[i] << ' ';
	}
}