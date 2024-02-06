#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int n;
string arr[10003];

string toString(string a, string b) {
	int num = 0;
	int carry = 0;
	string result = "";

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	if (a.size() > b.size()) {
		while (a.size() != b.size()) {
			b += '0';
		}
	}
	else {
		while (a.size() != b.size()) {
			a += '0';
		}
	}

	for (int i = 0; i < a.size(); i++) {
		num = ((a[i] - '0') + (b[i] - '0') + carry) % 10;
		result += to_string(num);
		carry = ((a[i] - '0') + (b[i] - '0') + carry) / 10;
	}
	if (carry != 0) {
		result += to_string(carry);
	}

	reverse(result.begin(), result.end());

	return result;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;

	arr[0] = "0";
	arr[1] = "1";
	arr[2] = "1";

	for (int i = 3; i <= n; i++) {
		arr[i] = toString(arr[i - 1], arr[i - 2]);
	}

	cout << arr[n];
}