#include <iostream>
#include <sstream>
#include <cstring>
#include <deque>
#include <algorithm>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	deque<string> dq;
	int T;
	string p;
	int n;
	string arr;
	bool isError = false;
	bool isR = false;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> p;
		cin >> n;
		cin >> arr;
		arr.erase(0, 1);
		arr.erase(arr.size() - 1, 1);

		istringstream ss(arr);
		string token;

		while (getline(ss, token, ',')) {
			dq.push_back(token);
		}

		isError = false;
		isR = false;

		for (int i = 0; i < p.size(); i++) {
			if (p[i] == 'D') {
				if (dq.empty()) {
					isError = true;
					break;
				}
				else {
					if (isR) {
						dq.pop_back();
					}
					else {
						dq.pop_front();
					}
				}
			}
			else {
				if (isR) {
					isR = false;
				}
				else {
					isR = true;
				}
			}
		}

		if (isError) {
			cout << "error" << '\n';
			continue;
		}

		cout << '[';
		if (isR) {
			for (int i = dq.size() - 1; i >= 0; i--) {
				if (i == 0) {
					cout << dq[i];
				}
				else {
					cout << dq[i] << ',';
				}
			}
		}
		else {
			for (int i = 0; i < dq.size(); i++) {
				if (i == dq.size() - 1) {
					cout << dq[i];
				}
				else {
					cout << dq[i] << ',';
				}
			}
		}
		cout << ']' << '\n';
		dq.clear();
	}
}