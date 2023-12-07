#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int gcd(int n1, int n2) {
	if (n2 == 0) {
		return n1;
	}
	else {
		return gcd(n2, n1 % n2);
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	vector<int> v;
	vector<int> v1;

	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < v.size() - 1; i++) {
		v1.push_back(v[i + 1] - v[i]);
	}

	int GCD = v1[0];
	for (int i = 1; i < v1.size(); i++) {
		GCD = gcd(GCD, v1[i]);
	}

	int count = 0;
	for (int i = 0; i < v1.size(); i++) {
		count += ((v1[i] / GCD) - 1);
	}

	cout << count;
}