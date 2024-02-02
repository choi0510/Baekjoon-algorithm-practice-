#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int search(const vector<int> &v2, int target) {
	int low = 0;
	int high = v2.size() - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (target > v2[mid]) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return low;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int N, M;
	int num;
	cin >> T;
	
	while (T--) {

		cin >> N >> M;

		vector<int> v1(N, 0);
		vector<int> v2(M, 0);
		
		for (int i = 0; i < N; i++) {
			cin >> v1[i];
		}

		for (int i = 0; i < M; i++) {
			cin >> v2[i];
		}

		sort(v1.begin(), v1.end());
		sort(v2.begin(), v2.end());

		int sum = 0;

		for (int i = 0; i < N; i++) {
			sum += search(v2, v1[i]);
		}

		cout << sum << '\n';
	}
}