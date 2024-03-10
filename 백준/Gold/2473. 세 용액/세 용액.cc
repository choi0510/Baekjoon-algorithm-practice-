#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N;
long long L;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> L;
		v.push_back(L);
	}

	sort(v.begin(), v.end());

	long long ans = 4000000003;
	long long sum = 0;
	long long A = 0, B = 0, C = 0;
	for (int i = 0; i < N - 2; i++) {
		long long fixedNum = i;
		long long st = i + 1;
		long long en = N - 1;
		while (st < en) {
			sum = v[fixedNum] + v[st] + v[en];
			if (ans > abs(sum)) {
				ans = abs(sum);
				A = v[fixedNum];
				B = v[st];
				C = v[en];
			}

			if (sum > 0) en--;
			else if (sum < 0) st++;
			else break;

		}		
	}

	cout << A << ' ' << B << ' ' << C;
}