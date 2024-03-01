#include <iostream>
using namespace std;

long long n;
long long a, b;

long long GCD(long long a, long long b) {
	if (a == 0) return b;
	return GCD(b % a, a);
}

long long LCM(long long a, long long b) {
	return (a / GCD(a, b)) * b;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	while (n--) {
		cin >> a >> b;
		cout << LCM(a, b) << '\n';
	}
}