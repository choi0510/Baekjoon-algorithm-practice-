#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;

	if (n1 == 60 && n2 == 60 && n3 == 60) {
		cout << "Equilateral";
	}
	else if (n1 + n2 + n3 == 180 && (n1 == n2 || n1 == n3 || n2 == n3)) {
		cout << "Isosceles";
	}
	else if (n1 + n2 + n3 == 180 && n1 != n2 && n1 != n3 && n2 != n3) {
		cout << "Scalene";
	}
	else {
		cout << "Error";
	}
}