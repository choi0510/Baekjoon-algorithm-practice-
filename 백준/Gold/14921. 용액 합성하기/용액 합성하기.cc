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

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	long long st = 0;
	long long en = N - 1;
	long long maxNum = 200000003;

	while (st < en) {

		long long key = v[st] + v[en];
		if (abs(key) < abs(maxNum)) {
			maxNum = key;
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

	cout << maxNum;
}