#include <iostream>
#include <algorithm>
using namespace std;

int L, C;
char real_arr[20];
char arr[20];
bool isused[20];

int countMo, countZa;

void backtracking(int k) {
	if (k == L) {

		if (countMo < 1 || countZa < 2) {
			return;
		}

		for (int i = 0; i < L; i++) {
			cout << real_arr[i];
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < C; i++) {
		if (!isused[i]) {
			if (k == 0) {
				real_arr[k] = arr[i];

				if (real_arr[k] == 'a' || real_arr[k] == 'e' || real_arr[k] == 'i' || real_arr[k] == 'o' || real_arr[k] == 'u') {
					countMo++;
				}
				else {
					countZa++;
				}
				isused[i] = true;
				backtracking(k + 1);

				if (real_arr[k] == 'a' || real_arr[k] == 'e' || real_arr[k] == 'i' || real_arr[k] == 'o' || real_arr[k] == 'u') {
					countMo--;
				}
				else {
					countZa--;
				}
			}
			else {
				if (real_arr[k - 1] > arr[i]) {
					continue;
				}
				real_arr[k] = arr[i];

				if (real_arr[k] == 'a' || real_arr[k] == 'e' || real_arr[k] == 'i' || real_arr[k] == 'o' || real_arr[k] == 'u') {
					countMo++;
				}
				else {
					countZa++;
				}
				isused[i] = true;
				backtracking(k + 1);
				isused[i] = false;

				if (real_arr[k] == 'a' || real_arr[k] == 'e' || real_arr[k] == 'i' || real_arr[k] == 'o' || real_arr[k] == 'u') {
					countMo--;
				}
				else {
					countZa--;
				}
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	char ch;

	cin >> L >> C;

	for (int i = 0; i < C; i++) {
		cin >> ch;
		arr[i] = ch;
	}

	sort(arr, arr + C);

	backtracking(0);
}