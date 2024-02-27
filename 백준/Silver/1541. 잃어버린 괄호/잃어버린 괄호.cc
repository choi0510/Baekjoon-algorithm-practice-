#include <iostream>
#include <string>
using namespace std;

string str;
string num;
bool isMinus;
int ans;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if (str[i] == '+') {
			if (!isMinus) {
				ans += stoi(num);
			}
			else {
				ans -= stoi(num);
			}
			num = "";
		}
		else if (str[i] == '-') {
			if (!isMinus) {
				ans += stoi(num);
			}
			else {
				ans -= stoi(num);
			}
			isMinus = true;
			num = "";
		}
		else {
			num += str[i];
		}
	}

	if (!isMinus) {
		ans += stoi(num);
	}
	else {
		ans -= stoi(num);
	}

	cout << ans;
}