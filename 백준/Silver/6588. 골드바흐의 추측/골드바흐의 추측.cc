#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	vector<int> v(1000001, 0);
	
	for (int i = 2; i < v.size(); i++) {
		v[i] = i;
	}
	
	for (int i = 2; i < v.size(); i++) {
		if (v[i] == 0) {
			continue;
		}
		for (int j = i * 2; j < v.size(); j += i) {
			if (v[j] == 0) {
				continue;
			}
			else {
				v[j] = 0;
			}
		}
	}

	do {
		cin >> n;
		if (n == 0) {
			break;
		}
		if (n % 2 != 0) {
			cout << "Goldbach's conjecture is wrong.\n";
		}
		else {
			for (int i = n - 1; i >= 3; i--) {
				if (v[i] + v[n - i] == n) {
					cout << n << " = " << v[n - i] << " + " << v[i] << '\n';
					break;
				}
			}
		}
	} while (n != 0);
}