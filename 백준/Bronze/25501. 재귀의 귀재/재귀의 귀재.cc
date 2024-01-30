#include <iostream>
using namespace std;

int cnt = 1;

//int recursion(string str, int l, int r) {
//	if (l >= r) {
//		return 1;
//	}
//	else if (str[l] != str[r]) {
//		return 0;
//	}
//	else {
//		cnt++;
//		return recursion(str, l + 1, r - 1);
//	}
//}
//
//int isPalindrome(string str) {
//	return recursion(str, 0, str.size() - 1);
//}

int isPalindrome(string str) {
	cnt = 1;
	
	for (int i = 0; i < str.size() / 2; i++) {
		if (str[i] != str[str.size() - 1 - i]) {
			return 0;
		}
		cnt++;
	}
	return 1;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string str;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		cout << isPalindrome(str) << ' ' << cnt << '\n';
	}
}