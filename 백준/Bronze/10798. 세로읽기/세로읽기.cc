#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	
	char arr1[6][16] = {'\0'};

	for (int i = 0; i < 5; i++) {
		cin >> arr1[i];
	}

	for (int j = 0; j < 15; j++) {
		for (int i = 0; i < 5; i++) {
			if (arr1[i][j] == '\0') {
				continue;
			}
			else {
				cout << arr1[i][j];
			}
		}
	}
}