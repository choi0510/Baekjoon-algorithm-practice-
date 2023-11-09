#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int a1, a0;
	int c, n0;
	bool isBig = true;
	
	cin >> a1 >> a0 >> c >> n0;

	for (int i = n0; i <= 100; i++) {
		if (((a1 * i) + a0) > (c * i)) {
			isBig = false;
			break;
		}
	}

	if (isBig == false) {
		cout << 0;
	}
	else {
		cout << 1;
	}
}