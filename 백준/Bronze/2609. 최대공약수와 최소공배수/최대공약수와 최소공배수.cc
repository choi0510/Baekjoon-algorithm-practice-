#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1, n2;
	vector<int> v1;
	vector<int> v2;

	cin >> n1 >> n2;

	if (n1 > n2) {
		for (int i = 1; i <= n2; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				v1.push_back(i);
			}
		}
	}
	else {
		for (int i = 1; i <= n1; i++) {
			if (n1 % i == 0 && n2 % i == 0) {
				v1.push_back(i);
			}
		}
	}

	int M = v1[0];
	for (int i = 0; i < v1.size(); i++) {
		M = max(M, v1[i]);
	}
	cout << M << '\n';

	for (int i = M; ;i += M) {
		if (i >= n1 && i >= n2) {
			if (i % n1 == 0 && i % n2 == 0) {
				cout << i;
				break;
			}
		}
	}
}