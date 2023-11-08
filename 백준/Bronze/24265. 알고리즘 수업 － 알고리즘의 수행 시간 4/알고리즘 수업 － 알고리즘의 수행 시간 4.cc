#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n;
	long long sum = 0;
	cin >> n;
	
	for (long long i = n - 1; i > 0; i--) {
		sum += i;
	}

	cout << sum << '\n' << 2;
}