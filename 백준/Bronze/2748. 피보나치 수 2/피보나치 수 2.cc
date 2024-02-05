#include <iostream>
using namespace std;

long long arr[91];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;

	arr[0] = 0;
	arr[1] = 1;
	arr[2] = 1;

	for (int i = 3; i <= 90; i++) {
		arr[i] = arr[i - 2] + arr[i - 1];
	}

	cin >> N;

	cout << arr[N];
}