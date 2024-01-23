#include <iostream>
using namespace std;

int key = 1;
int real_arr[10];
int arr[10];
int isused[10];

void backtracking(int k) {
	if (k == 6) {
		for (int i = 0; i < 6; i++) {
			cout << real_arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	for (int i = 0; i < key; i++) {
		if (!isused[i]) {
			if (k == 0) {
				real_arr[k] = arr[i];
				isused[i] = true;
				backtracking(k + 1);
				isused[i] = false;
			}
			else {
				if (real_arr[k - 1] > arr[i]) {
					continue;
				}
				real_arr[k] = arr[i];
				isused[i] = true;
				backtracking(k + 1);
				isused[i] = false;
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int num;

	while (key != 0) {

		cin >> key;

		if (key == 0) {
			break;
		}

		for (int i = 0; i < key; i++) {
			cin >> num;
			arr[i] = num;
		}

		backtracking(0);
		
		cout << '\n';
	}
}