#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

long long N, M;
long num;
vector<long long> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	long long sum = 0;
	for (int i = 0; i < N; i++) {
		sum = 0;
		for (int j = i; j < N; j++) {
			sum += v[j];
			if (sum > M) {
				break;
			}
			if (sum == M) {
				count++;
				break;
			}
		}
	}

	cout << count;
}