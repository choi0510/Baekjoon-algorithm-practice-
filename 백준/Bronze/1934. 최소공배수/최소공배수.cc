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

	int T;
	int n1, n2;
	int GCD;
	int LCM;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> n1 >> n2;
		GCD = gcd(n1, n2);
		cout << n1 * (n2 / GCD) << '\n';
	}
}