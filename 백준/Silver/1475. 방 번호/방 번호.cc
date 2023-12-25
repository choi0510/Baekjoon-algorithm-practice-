#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string N;
	int arr[10] = { 0, };

	cin >> N;
	for (int i = 0; i < N.size(); i++) {
		arr[N[i] - '0']++;
	}

	int sixandnine = arr[6] + arr[9];
	if (sixandnine % 2 == 0) {
		sixandnine /= 2;
	}
	else {
		sixandnine -= (sixandnine / 2);
	}
	arr[6] = sixandnine;
	arr[9] = sixandnine;

	int max_n = 0;
	for (int i = 0; i < 10; i++) {
		max_n = max(max_n, arr[i]);
	}
	cout << max_n;
}