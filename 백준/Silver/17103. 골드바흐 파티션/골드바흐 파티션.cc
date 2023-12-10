#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T, N;
	int max = 1000013;
	int count = 0;
	vector<int> v(max+1, 0);

	for (int i = 2; i < max + 1; i++) {
		v[i] = i;
	}
	for (int i = 2; i * i < max + 1; i++) {
		if (v[i] == 0) {
			continue;
		}
		for (int j = 2 * i; j < max+1; j += i) {
			if (v[j] == 0) {
				continue;
			}
			else {
				v[j] = 0;
			}
		}
	}

	cin >> T;
	for (int k = 0; k < T; k++) {
		cin >> N;
		count = 0;
		for (int i = 2; i <= N / 2; i++) {
			if (v[i] + v[N - i] == N) {
				count++;
			}
		}
		cout << count << '\n';
	}
}