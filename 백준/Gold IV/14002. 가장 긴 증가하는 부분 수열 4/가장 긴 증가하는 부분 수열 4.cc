#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int arr[1003];
int dp[1003];
vector<int> v;
int N;
int maxSize = 1;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	dp[1] = 1;
	for (int i = 2; i <= N; i++) {
		int keyIdx = 0;
		int maxNum = 0;
		for (int j = i - 1; j >= 0; j--) {
			if (arr[j] >= 1 && arr[j] < arr[i]) {
				if (maxNum < dp[j]) {
					maxNum = dp[j];
					keyIdx = j;
				}
			}
		}
		dp[i] = maxNum + 1;
		maxSize = max(maxSize, dp[i]);
	}

	cout << maxSize << '\n';

	for (int i = maxSize; i >= 1; i--) {
		for (int j = N; j >= 1; j--) {
			if (dp[j] == i) {
				v.push_back(arr[j]);
				N = j;
				break;
			}
		}
	}

	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i] << ' ';
	}
}