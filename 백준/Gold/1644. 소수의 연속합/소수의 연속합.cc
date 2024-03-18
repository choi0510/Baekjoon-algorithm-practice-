#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
int arr[4000003];
vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	if (N == 1) {
		cout << 0;
		return 0;
	}
	else if (N == 2) {
		cout << 1;
		return 0;
	}

	for (int i = 2; i <= N; i++) {
		arr[i] = i;
	}

	for (int i = 2; i <= N; i++) {
		if (!arr[i]) {
			continue;
		}
		for (int j = i * 2; j <= N; j += i) {
			arr[j] = 0;
		}
	}

	for (int i = 2; i <= N; i++) {
		if (arr[i]) {
			v.push_back(arr[i]);
		}
	}

	int st = 0;
	int en = 1;
	int count = 0;
	int sum = v[st] + v[en];
	while (st <= en && en < v.size()) {
		if (sum < N) {
			en++;
			if (en == v.size()) {
				break;
			}
			sum += v[en];
		}
		else if (sum > N) {
			sum -= v[st];
			st++;
		}
		else {
			count++;
			sum -= v[st];
			st++;
			en++;
			if (en == v.size()) {
				break;
			}
			sum += v[en];
		}
	}

	cout << count;
}