#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	vector<int> v;
	vector<int> v1;

	v.push_back(300);
	v.push_back(60);
	v.push_back(10);

	cin >> T;

	for (int i = 0; i < 3; i++) {
		if (v[i] > T) {
			v1.push_back(0);
			continue;
		}
		v1.push_back(T / v[i]);
		T -= v1[i]*v[i];
	}

	if (T != 0) {
		cout << -1;
		return 0;
	}

	for (int i = 0; i < 3; i++) {
		cout << v1[i] << ' ';
	}
}