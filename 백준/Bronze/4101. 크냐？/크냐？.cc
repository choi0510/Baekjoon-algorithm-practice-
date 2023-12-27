#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1 = 1, n2 = 1;
	do {
		cin >> n1 >> n2;
		if (n1 == 0 && n2 == 0) {
			break;
		}
		if (n1 > n2) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	} while (n1 != 0 && n2 != 0);
}