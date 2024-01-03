#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int A, B, C;
	int D;

	cin >> A >> B >> C;
	cin >> D;

	C += D;
	if (C > 59) {
		B += (C / 60);
		C %= 60;
	}

	if (B > 59) {
		A += (B / 60);
		B %= 60;
	}

	if (A > 23) {
		A %= 24;
	}
	cout << A << ' ' << B << ' ' << C;
}