#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> n;
		if (n < 40) {
			sum += 40;
		}
		else {
			sum += n;
		}
	}

	cout << sum / 5;
}