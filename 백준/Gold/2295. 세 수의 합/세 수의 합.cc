#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N;
long long num;
vector<long long> v1;
vector<long long> v2;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long sum = 0;

	cin >> N;
	
	while (N--) {
		cin >> num;
		v1.push_back(num);
	}

	for (int i = 0; i < v1.size(); i++) {
		for (int j = i; j < v1.size(); j++) {
			v2.push_back(v1[i] + v1[j]);
		}
	}

	sort(v2.begin(), v2.end());

	for (int i = 0; i < v1.size(); i++) {
		for (int j = 0; j <= i; j++) {
			if (binary_search(v2.begin(), v2.end(), v1[i] - v1[j])) {
				sum = max(sum, v1[i]);
			}
		}
	}

	cout << sum;
}