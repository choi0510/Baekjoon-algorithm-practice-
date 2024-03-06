#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N;
long long num;
long long maxNum = 2000000003;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	long long st = 0;
	long long en = N - 1;
	long long A, B;

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
		else if(key > 0){
			en--;
		}
		else {
			break;
		}
	}

	cout << A << ' ' << B;
}