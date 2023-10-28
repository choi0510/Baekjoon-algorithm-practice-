#include <iostream>
using namespace std;

int fib(int n) {

	if (n == 0) { return 0; }
	else if (n == 1) { return 1; }

	return fib(n - 1) + fib(n - 2);
}

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	cin >> n;

	cout << fib(n);
}