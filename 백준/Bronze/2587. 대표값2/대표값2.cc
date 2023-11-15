#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	int sum = 0;
	vector<int> v;

	for (int i = 0; i < 5; i++) {
		cin >> num;
		v.push_back(num);
		sum += num;
	}

	sort(v.begin(), v.end());
	sum /= 5;

	cout << sum << '\n' << v[2];
}