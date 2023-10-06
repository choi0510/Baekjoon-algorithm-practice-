#include <iostream>
using namespace std;

int main() {
	int n;
	int arr1[100];
	bool divide = false;
	int count = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
		if (arr1[i] == 1) {
			continue;
		}
		else if (arr1[i] == 2) {
			count++;
		}
		else {
			divide = false;
			for (int j = 2; j < arr1[i]; j++) {
				if (arr1[i] % j == 0) {
					divide = true;
				}
			}
			if (divide != true) {
				count++;
			}
		}
	}
	cout << count;
}