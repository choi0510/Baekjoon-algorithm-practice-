#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n1, n2;
	vector<int> v(20, 0);

	for (int i = 1; i <= 20; i++) {
		v[i - 1] = i;
	}

	for (int i = 0; i < 10; i++) {
		cin >> n1 >> n2;
		int k = n2;
		for (int j = n1; j <= (n1 + n2) / 2; j++) {
			swap(v[j - 1], v[k - 1]);
			k--;
		}
	}
	for (int l = 1; l <= 20; l++) {
		cout << v[l - 1] << ' ';
	}
	
}