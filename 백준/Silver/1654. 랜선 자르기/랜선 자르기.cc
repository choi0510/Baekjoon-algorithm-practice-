#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<long long> v1;

long long findLen(long long v1_max, vector<long long>& v2, long long K, long long N) {
	long long low = 1;
	long long high = v1_max;
	long long result = 0;

	if (v1_max == 1) {
		return 1;
	}

	while (low <= high) {
		long long mid = (low + high) / 2;
		long long sum = 0;
		for (long long i = 0; i < K; i++) {
			sum += (v1[i] / mid);
		}
		if (sum >= N) {
			result = max(result, mid);
			low = mid + 1;
		}
		else if (sum < N) {
			high = mid - 1;
		}
	}
	return result;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long K, N;
	long long num;
	
	vector<long long> v2;

	cin >> K >> N;
	for (long long i = 0; i < K; i++)
	{
		cin >> num;
		v1.push_back(num);
	}

	sort(v1.begin(), v1.end());
	long long v1_max = v1[v1.size() - 1];

	cout << findLen(v1_max ,v2, K, N);
}