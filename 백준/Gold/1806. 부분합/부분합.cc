#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, S;
int num;
vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> S;

	for (int i = 0; i < N; i++) {
		cin >> num;

		if (num == S) {
			cout << 1;
			return 0;
		}

		v.push_back(num);
	}

	int st = 0;
	int en = 1;
	long long sum = v[st] + v[en];
	int len = 0;
	while (st <= en && en < N) {

		if (sum < S) {
			en++;
			if (en == N) {
				break;
			}
			sum += v[en];
		}
		else if (sum > S) {
			int tempLen = en - st + 1;
			if (len != 0) {
				len = min(len, tempLen);
			}
			else {
				len = tempLen;
			}
			sum -= v[st];
			st++;
		}
		else {
			int tempLen = en - st + 1;
			if (len != 0) {
				len = min(len, tempLen);
			}
			else {
				len = tempLen;
			}
			sum -= v[st];
			st++;
			if (en == N) {
				break;
			}
			en++;
			sum += v[en];
		}
	}

	cout << len;
}