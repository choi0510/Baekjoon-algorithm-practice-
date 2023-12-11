#include <iostream>
using namespace std;

int arr[40];

int fibonacci(int n) {
	arr[1] = 1;
	arr[2] = 1;
	for (int i = 3; i <= n; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}
	return arr[n];
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n; 
	cin >> n;

	cout << fibonacci(n) << ' ' << n - 2;
}