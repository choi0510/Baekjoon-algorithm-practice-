#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int runTime;
	int x = 0;
	int y = 0;

	for (int i = 0; i < 4; i++) {
		cin >> runTime;
		y += runTime;
	}

	if (y > 59) {
		x += y / 60;
		y %= 60;
	}

	cout << x << '\n' << y;
}