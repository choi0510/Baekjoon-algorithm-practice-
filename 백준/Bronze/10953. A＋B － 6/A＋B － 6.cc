#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int sum = 0;
	string s;

	cin >> T;
	for (int i = 0; i < T; i++) {
		sum = 0;
		cin >> s;
		for (int j = 0; j < 3; j++) {
			if (s[j] == ',') {
				continue;
			}
			sum += s[j] - '0';
		}
		cout << sum << '\n';
	}
}