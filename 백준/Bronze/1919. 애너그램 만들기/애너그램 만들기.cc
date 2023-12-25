#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int arr1[26] = { 0, };
	int arr2[26] = { 0, };
	string a, b;
	int count = 0;
	int sub = 0;

	cin >> a >> b;

	for (int i = 0; i < a.size(); i++) {
		arr1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.size(); i++) {
		arr2[b[i] - 'a']++;
	}

	for (int i = 0; i < 26; i++) {
		sub = arr1[i] - arr2[i];
		if (sub < 0) {
			sub *= -1;
		}
		count += sub;
	}
	cout << count;
}