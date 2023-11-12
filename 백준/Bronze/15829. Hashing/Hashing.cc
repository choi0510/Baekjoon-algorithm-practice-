#include <iostream>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	long long L;
	long long ch;
	long long sum = 0;
	long long M = 1234567891;
	string s;

	cin >> L;
	cin >> s;

	for (long long i = 0; i < L; i++) {
		ch = (s[i] - 'a' + 1);
		for (long long j = 0; j < i; j++) {
			ch *= 31;
			ch %= M;
		}
		sum += ch;
	}

	cout << sum % M;
}