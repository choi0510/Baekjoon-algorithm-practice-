#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int M, N;
	int count1 = 0;
	int count2 = 0;
	int sum = 0;
	vector<int> v;

	cin >> M >> N;

	for (int i = M; i <= N; i++) {
		count1 = 0;
		if (i == 1) {
			continue;
		}
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				count1++;
			}
		}
		if (count1 == 0) {
			v.push_back(i);
			count2++;
		}
	}

	if (v.empty()) {
		cout << -1;
	}
	else {
		int min = v[0];
		for (int i = 0; i < count2; i++) {
			sum += v[i];
		}
		cout << sum << '\n' << min;
	}
}