#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int L;
	int ch;
	int sum = 0;
	string s;

	cin >> L;
	cin >> s;

	for (int i = 0; i < L; i++) {
		ch = (s[i] - 'a' + 1);
		for (int j = 0; j < i; j++) {
			ch *= 31;
		}
		sum += ch;
	}

	cout << sum;
}