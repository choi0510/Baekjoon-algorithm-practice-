#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;
	int sto_count = 0;
	int back_count = 0;

	for (int i = 0; i < 3; i++) {
		sto_count = 0;
		back_count = 0;
		for (int j = 0; j < 4; j++) {
			cin >> num;
			if (num == 1) {
				back_count++;
			}
		}
		if (back_count == 4) {
			cout << 'E' << '\n';
		}
		else if (back_count == 0) {
			cout << 'D' << '\n';
		}
		else if (back_count == 1) {
			cout << 'C' << '\n';
		}
		else if (back_count == 2) {
			cout << 'B' << '\n';
		}
		else {
			cout << 'A' << '\n';
		}
	}
}