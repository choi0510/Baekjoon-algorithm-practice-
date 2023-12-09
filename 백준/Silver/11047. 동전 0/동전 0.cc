#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	int num;
	int count = 0;
	vector<int> v;

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	while (K != 0) {
		for (int i = 0; i < N; i++) {
			if (N == 1 && i == 0) {
				count += (K / v[0]);
				cout << count;
				return 0;
			}
			if (v[i] <= K) {
				if (i == N - 1) {
					count += (K / v[i]);
					K %= v[i];
				}
				continue;
			}
			else {
				count += (K / v[i - 1]);
				K %= v[i - 1];
			}
		}
	}

	cout << count;
}