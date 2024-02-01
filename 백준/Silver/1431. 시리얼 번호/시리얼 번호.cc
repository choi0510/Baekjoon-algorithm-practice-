#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool compare(string v1, string v2) {

	int minsize = min(v1.size(), v2.size());

	if (v1.size() == v2.size()) {
		int sum1 = 0;
		int sum2 = 0;
		
		for (int i = 0; i < v1.size(); i++) {
			if (v1[i] - '0' >= 0 && v1[i] - '0' <= 9) {
				sum1 += v1[i] - '0';
			}
		}

		for (int i = 0; i < v2.size(); i++) {
			if (v2[i] - '0' >= 0 && v2[i] - '0' <= 9) {
				sum2 += v2[i] - '0';
			}
		}

		if (sum1 != sum2) {
			return sum1 < sum2;
		}
		else {
			return v1 < v2;
		}
	}
	else {
		return v1.size() < v2.size();
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string sireal;
	vector<string> v;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> sireal;
		v.push_back(sireal);
	}

	sort(v.begin(), v.end(), compare);

	for (int i = 0; i < N; i++) {
		cout << v[i] << '\n';
	}
}