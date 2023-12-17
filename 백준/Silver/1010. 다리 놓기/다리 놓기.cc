#include <iostream>
#include <vector>
using namespace std;

long long fac(long long n, long long k, long long sub) {
	long long result = 1;
	vector<int> dq1;
	vector<int> dq2;
	for (int i = 1; i <= k; i++) {
		dq1.push_back(i);
	}
	for (int i = 1; i <= sub; i++) {
		dq2.push_back(i);
	}
	int i = 1;
	int j = 1;
	while (n > 0) {
		result *= n;
		for (int l = 0; l < dq1.size(); l++) {
			if (result % dq1[l] == 0) {
				result /= dq1[l];
				dq1.erase(dq1.begin() + l);
				break;
			}
		}
		for (int l = 0; l < dq2.size(); l++) {
			if (result % dq2[l] == 0) {
				result /= dq2[l];
				dq2.erase(dq2.begin() + l);
				break;
			}
		}
		n--;
	}
	return result;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N;
	long long n, k;
	cin >> N;

	for (long long i = 0; i < N; i++) {
		cin >> k >> n;
		cout << fac(n, k, n-k) << '\n';
	}
}