#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<long long> v;
	string number;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> number;
		reverse(number.begin(), number.end());
		v.push_back(stoll(number));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << '\n';
	}
}