#include <iostream>
using namespace std;

long long fac(long long num) {
	if (num == 0) { return 1; }
	return num * fac(num - 1);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long N;
	cin >> N;
	cout << fac(N);
}