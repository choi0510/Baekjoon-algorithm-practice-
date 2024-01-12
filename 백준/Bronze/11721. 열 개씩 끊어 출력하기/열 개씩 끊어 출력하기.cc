#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string N;

	cin >> N;

	for (int i = 0; N[i] != '\0'; i++) {
		if (i == 0) {
			cout << N[i];
			continue;
		}
		if (i % 10 == 0) {
			cout << '\n';
		}
		cout << N[i];
	}
}