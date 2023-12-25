#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string w;
	int arr[26] = { 0, };

	cin >> w;
	for (int i = 0; i < w.size(); i++) {
		int idx = w[i] - 'a';
		arr[idx]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}
}