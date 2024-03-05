#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
long long num;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B;
	long long maxNum = 2000000003;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	int st = 0;
	int en = N - 1;
	while (st < en) {
		long long key = v[st] + v[en];

		if (abs(key) < abs(maxNum)) {
			maxNum = key;
			A = v[st];
			B = v[en];
		}

		if (key < 0) {
			st++;
		}
		else if (key > 0) {
			en--;
		}
		else {
			break;
		}
	}

	cout << A << ' ' << B;
}