#include <iostream>
using namespace std;

int main() {
	string ch;
	cin >> ch;

	cout << fixed;
	cout.precision(1);

	if (ch == "A+") {
		cout << 4.3;
	}
	else if (ch == "A0") {
		cout << 4.0;
	}
	else if (ch == "A-") {
		cout << 3.7;
	}
	else if (ch == "B+") {
		cout << 3.3;
	}
	else if (ch == "B0") {
		cout << 3.0;
	}
	else if (ch == "B-") {
		cout << 2.7;
	}
	else if (ch == "C+") {
		cout << 2.3;
	}
	else if (ch == "C0") {
		cout << 2.0;
	}
	else if (ch == "C-") {
		cout << 1.7;
	}
	else if (ch == "D+") {
		cout << 1.3;
	}
	else if (ch == "D0") {
		cout << 1.0;
	}
	else if (ch == "D-") {
		cout << 0.7;
	}
	else {
		cout << 0.0;
	}
}