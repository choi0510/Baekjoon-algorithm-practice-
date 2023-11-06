#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int a, b, c;
	vector<int> v;
	
	cin >> a >> b >> c;
	if (a == b && b == c && c == a) {
		cout << a + b + c;
		return 0;
	}
	else {
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);

		if (a != b && a != c && b != c) {
			int v_max = v[0];
			int v_min = v[0];
			for (int i = 0; i < 3; i++) {
				v_max = max(v_max, v[i]);
				v_min = min(v_min, v[i]);
			}
			int max_index = find(v.begin(), v.end(), v_max) - v.begin();
			int min_index = find(v.begin(), v.end(), v_min) - v.begin();
			int v_mid = v[3 - (max_index + min_index)];

			if (v_max < v_min + v_mid) {
				cout << v_max + v_mid + v_min;
			}
			else {
				v_max = (v_mid + v_min) - 1;
				cout << v_max + v_mid + v_min;
			}
		}
		else {
			int count = 0;
			int v_max = v[0];
			for (int i = 0; i < 3; i++) {
				v_max = max(v_max, v[i]);
			}
			for (int i = 0; i < 3; i++) {
				if (v_max == v[i]) {
					count++;
				}
			}
			if (count == 2) {
				cout << a + b + c;
			}
			else {
				if (v_max == a) {
					if (v_max >= b + c) {
						cout << b + c + (b + c - 1);
					}
					else {
						cout << a + b + c;
					}
				}
				else if (v_max == b) {
					if (v_max >= a + c) {
						cout << a + c + (a + c - 1);
					}
					else {
						cout << a + b + c;
					}
				} else if (v_max == c) {
					if (v_max >= a + b) {
						cout << a + b + (a + b - 1);
					}
					else { 
						cout << a + b + c;
					}
				}
			}
		}
	}
}