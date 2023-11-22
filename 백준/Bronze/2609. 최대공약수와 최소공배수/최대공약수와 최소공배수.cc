#include <iostream>
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

	int n1, n2;

	cin >> n1 >> n2;

	int gcdNum = gcd(n1, n2);
	int lcmNum = n1 * (n2 / gcdNum);

	cout << gcdNum << '\n' << lcmNum;
}