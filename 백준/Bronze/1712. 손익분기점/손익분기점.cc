#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long A, B, C;

	cin >> A >> B >> C;

	if (C - B <= 0) {
		cout << -1;
	}
	else {
		cout << A / (C - B) + 1;
	}
}