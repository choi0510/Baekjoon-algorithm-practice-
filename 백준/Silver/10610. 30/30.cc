#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string N;
vector<int> v;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int sum = 0;
	int countZero = 0;

	cin >> N;

	for (int i = 0; i < N.size(); i++) {
		if (N[i] == '0' && !countZero) {
			countZero++;
		}
		else {
			sum += N[i] - '0';
			v.push_back(N[i] - '0');
		}
	}

	if (!countZero) {
		cout << -1;
		return 0;
	}

	if (sum % 3 == 0) {
		sort(v.begin(), v.end(), greater<int>());
		
		for (int i = 0; i < v.size(); i++) {
			cout << v[i];
		}
		cout << 0;
	}
	else {
		cout << -1;
	}
}