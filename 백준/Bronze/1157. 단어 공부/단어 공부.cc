#include <iostream>
#include <array>
#include <string>
using namespace std;

int main() {
	char arr1[26][26] = {
	"A", "B", "C", "D", "E",
	"F", "G", "H", "I", "J",
	"K", "L", "M", "N", "O",
	"P", "Q", "R", "S", "T",
	"U", "V", "W", "X", "Y", "Z"
	};
	int arr2[26] = { 0 };
	string str1;
	int big = 0;
	int count = 0;

	cin >> str1;

	for (char& al : str1) {
		if ('a' <= al && al <= 'z') {
			al -= 32;
		}
	}

	for (int i = 0; i < str1.size(); i++) {
		for (int j = 0; j < 26; j++) {
			if (str1[i] == arr1[j][0]) {
				arr2[j] += 1;
			}
		}
	}

	big = arr2[0];
	for (int i = 1; i < 26; i++) {
		big = (big > arr2[i]) ? big : arr2[i];
	}

	for (int i = 0; i < 26; i++) {
		if (big == arr2[i]) {
			count++;
		}
	}
	
	if (count > 1) {
		cout << "?";
	}
	else if (count == 1) {
		for (int i = 0; i < 26; i++) {
			if (big == arr2[i]) {
				cout << arr1[i][0];
			}
		}
	}
	
	return 0;
}