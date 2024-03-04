#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int A, B;
int num;
vector<int> v1;
vector<int> v2;
vector<int> v3;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int count = 0;
	bool is = false;

	cin >> A >> B;

	for (int i = 0; i < A; i++) {
		cin >> num;
		v1.push_back(num);
	}

	for (int i = 0; i < B; i++) {
		cin >> num;
		v2.push_back(num);
	}

	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	for (int i = 0; i < v1.size(); i++) {
		if (!binary_search(v2.begin(), v2.end(), v1[i])) {
			count++;
			v3.push_back(v1[i]);
			is = true;
		}
	}

	if (!is) {
		cout << 0;
	}
	else {
		cout << count << '\n';
		for (int i = 0; i < v3.size(); i++) {
			cout << v3[i] << ' ';
		}
	}
}