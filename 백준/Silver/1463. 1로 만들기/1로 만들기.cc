#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<int> v(1000001, 0);
	v[1] = 0;
	v[2] = 1;
	v[3] = 1;

	cin >> n;
	for (int i = 4; i <= n; i++) {
		int a = v[i - 1];
		int b = i;
		int c = i;
		if (i % 3 == 0) {
			b = v[i / 3];
		}
		if (i % 2 == 0) {
			c = v[i / 2];
		}
		v[i] = min({ a, b, c }) + 1;
	}
	cout << v[n];
}