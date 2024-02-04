#include <iostream>
using namespace std;

long long arr[10001];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	long long n;

	cin >> n;

	arr[1] = 1;
	arr[2] = 2;

	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
		arr[i] %= 10007;
	}

	cout << arr[n] % 10007;
}