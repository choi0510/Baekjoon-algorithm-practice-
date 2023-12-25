#include <iostream>
using namespace std;

int arr1[2000013];
int arr2[2000013];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	int n, num, x;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		arr1[i] = num;
	}

	cin >> x;
	for (int i = 0; i < n; i++) {
		if (x - arr1[i] > 0 && arr2[x - arr1[i]]) {
			count++;
		}
		arr2[arr1[i]] = 1;
	}
	cout << count;
}