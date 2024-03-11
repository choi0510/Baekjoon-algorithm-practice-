#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int T;
int n, m;
long long num;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<long long> A;
	vector<long long> B;
	long long ans = 0;

	cin >> T;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		A.push_back(num);
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		cin >> num;
		B.push_back(num);
	}

	for (int i = 0; i < n; i++) {
		long long sum = 0;
		for (int j = i; j < n; j++) {
			sum += A[j];
			if (j != i) {
				A.push_back(sum);
			}
		}
	}

	for (int i = 0; i < m; i++) {
		long long sum = 0;
		for (int j = i; j < m; j++) {
			sum += B[j];
			if (j != i) {
				B.push_back(sum);
			}
		}
	}

	sort(B.begin(), B.end());

	for (int i = 0; i < A.size(); i++) {
		long long key = T - A[i];
		long long lower_key = lower_bound(B.begin(), B.end(), key) - B.begin();
		long long upper_key = upper_bound(B.begin(), B.end(), key) - B.begin();

		ans += upper_key - lower_key;
	}

	cout << ans;
}