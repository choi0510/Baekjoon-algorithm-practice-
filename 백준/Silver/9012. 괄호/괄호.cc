#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	string str;
	stack<char> s;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> str;
		for (int j = 0; j < str.size(); j++) {
			s.push(str[j]);
			if (s.size() > 1) {
				char a = s.top();
				s.pop();
				char b = s.top();
				s.pop();
				if (a == ')' && b == '(') {
					continue;
				}
				else {
					s.push(a);
					s.push(b);
				}
			}
		}
		if (s.empty()) {
			cout << "YES" << '\n';
		}
		else {
			cout << "NO" << '\n';
		}
		while (!s.empty()) s.pop();
	}
}