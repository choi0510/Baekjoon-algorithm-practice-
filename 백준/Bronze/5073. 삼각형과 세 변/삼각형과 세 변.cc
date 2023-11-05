#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1=1, n2=1, n3=1;
	vector<int> v;

	while (n1 != 0 && n2 != 0 && n3 != 0) {
		v.clear();

		cin >> n1 >> n2 >> n3;
		if (n1 == 0 && n2 == 0 && n3 == 0) {
			break;
		}
		v.push_back(n1);
		v.push_back(n2);
		v.push_back(n3);

		int v_max = v[0];
		for (int i = 0; i < 3; i++) {
			v_max = max(v_max, v[i]);
		}
		if (v_max == n1) {
			if (v_max >= n2 + n3) {
				cout << "Invalid" << '\n';
			}
			else if (v_max == n2 && v_max == n3 && n2 == n3) {
				cout << "Equilateral" << '\n';
			}
			else if (v_max != n2 && v_max != n3 && n2 != n3) {
				cout << "Scalene" << '\n';
			}
			else {
				cout << "Isosceles" << '\n';
			}
		}
		else if (v_max == n2) {
			if (v_max >= n1 + n3) {
				cout << "Invalid" << '\n';
			}
			else if (v_max == n1 && v_max == n3 && n1 == n3) {
				cout << "Equilateral" << '\n';
			}
			else if (v_max != n1 && v_max != n3 && n1 != n3) {
				cout << "Scalene" << '\n';
			}
			else {
				cout << "Isosceles" << '\n';
			}
		}
		else if (v_max == n3) {
			if (v_max >= n2 + n1) {
				cout << "Invalid" << '\n';
			}
			else if (v_max == n2 && v_max == n1 && n2 == n1) {
				cout << "Equilateral" << '\n';
			}
			else if (v_max != n2 && v_max != n1 && n2 != n1) {
				cout << "Scalene" << '\n';
			}
			else {
				cout << "Isosceles" << '\n';
			}
		}
	}
}