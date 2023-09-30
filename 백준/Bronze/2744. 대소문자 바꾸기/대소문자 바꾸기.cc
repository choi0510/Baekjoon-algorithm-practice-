#include <iostream>
using namespace std;

int main() {
	string str1;
	cin >> str1;
	
	for (char& ch : str1) {
		if ('A' <= ch && ch <= 'Z') {
			ch += 32;
		}
		else if ('a' <= ch && ch <= 'z') {
			ch -= 32;
		}
	}
	for (char& ch : str1) {
		cout << ch;
	}
	return 0;
}