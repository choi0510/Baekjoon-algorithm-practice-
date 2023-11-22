#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	deque<char> d;
	string str;
	bool isF = true;

	for (int i = 0; ; i++) {
		cin >> str;
		isF = true;
		if (str == "0") {
			break;
		}
		else {
			for (int k = 0; k < str.size(); k++) {
				d.push_back(str[k]);
			}
		}
		while (d.size() > 1) {
			char front = d.front();
			d.pop_front();
			char back = d.back();
			d.pop_back();
			if (front != back) {
				isF = false;
			}
		}
		if (isF == true) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
		}
		for (int j = 0; j < d.size(); j++) {
			d.pop_back();
		}
	}
}