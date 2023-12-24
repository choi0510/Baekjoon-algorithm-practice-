#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int height;
	int sum = 0;
	vector<int> v;
	vector<int> v2;

	for (int i = 0; i < 9; i++) {
		cin >> height;
		v.push_back(height);
		sum += height;
	}

	sort(v.begin(), v.end());

	int sum_copy = sum;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			sum_copy = sum;
			if (i == j) {
				continue;
			}
			else {
				sum_copy -= (v[i] + v[j]);
				if (sum_copy == 100) {
					for (int k = 0; k < 9; k++) {
						if (k == i || k == j) {
							continue;
						}
						else {
							v2.push_back(v[k]);
						}
					}
					break;
				}
			}
		}
		if (!v2.empty()) {
			break;
		}
	}

	sort(v2.begin(), v2.end());

	for (int l = 0; l < v2.size(); l++) {
		cout << v2[l] << '\n';
	}
}
