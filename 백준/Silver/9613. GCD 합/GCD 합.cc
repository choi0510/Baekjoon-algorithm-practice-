#include <iostream>
#include <vector>
using namespace std;

int T, N;
long long sum;

int GCD(int a, int b) {
	if (a == 0) return b;
	return GCD(b % a, a);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;

	cin >> T;
	while (T--) {
		sum = 0;
		cin >> N;

		vector<int> v;

		for (int i = 0; i < N; i++) {
			cin >> num;
			v.push_back(num);
		}

		for (int i = 0; i < v.size() - 1; i++) {
			int key = v[i];
			for (int j = i + 1; j < v.size(); j++) {
				sum += GCD(key, v[j]);
			}
		}

		cout << sum << '\n';
	}
}