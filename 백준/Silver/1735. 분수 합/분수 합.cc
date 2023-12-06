#include <iostream>
using namespace std;

long long gcd(long long n1, long long n2) {
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

	long long up1, down1;
	long long up2, down2;
	long long up3, up4;
	long long GCD;
	long long LCM;
	long long upResult;

	cin >> up1 >> down1 >> up2 >> down2;

	GCD = gcd(down1, down2);
	LCM = down1 * (down2 / GCD);

	up3 = up1 * (LCM / down1);
	up4 = up2 * (LCM / down2);

	upResult = up3 + up4;

	while (gcd(upResult, LCM) != 1) {
		long long div = gcd(upResult, LCM);
		upResult /= div;
		LCM /= div;
	}

	cout << upResult << ' ' << LCM;
}