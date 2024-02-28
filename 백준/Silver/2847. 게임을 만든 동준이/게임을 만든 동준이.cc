#include <iostream>
#include <vector>
using namespace std;

int N;
int num;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> v1;
	vector<int> v2;
	int count = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v1.push_back(num);
	}

	if (N == v1[v1.size() - 1]) {
		for (int i = v1.size() - 1; i >= 0; i--) {
			if (v1[i] != i + 1) {
				int key = (i + 1) - v1[i];
				if (key < 0) key *= -1;
				count += key;
			}
		}
	}
	else {
		for (int i = v1.size() - 2; i >= 0; i--) {
			if (v1[i + 1] <= v1[i]) {
				count += v1[i] - (v1[i + 1] - 1);
				v1[i] = v1[i + 1] - 1;
			}
			else {
				continue;
			}
		}
	}

	cout << count;
}