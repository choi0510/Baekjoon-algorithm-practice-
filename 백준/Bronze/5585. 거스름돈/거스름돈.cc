#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int result;
	int count = 0;
	vector<int> v;

	v.push_back(500);
	v.push_back(100);
	v.push_back(50);
	v.push_back(10);
	v.push_back(5);
	v.push_back(1);

	cin >> n;
	result = 1000 - n;

	for (int i = 0; i < 6; i++) {
		if (v[i] > result) {
			continue;
		}
		count += (result / v[i]);
		result %= v[i];
		if (result == 0) {
			break;
		}
	}

	cout << count;


}