#include <iostream>
#include <string>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	deque<char> d;
	string str;

	do {
		getline(cin, str);
		if (str.size() == 1 && str[0] == '.') {
			break;
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				d.push_back(str[i]);
			}
			else if (str[i] == ')' || str[i] == ']') {
				if (d.empty()) {
					d.push_back(str[i]);
					break;
				}
				else {
					if (str[i] == ')') {
						if (d.back() == '(') {
							d.pop_back();
						}
						else {
							break;
						}
					}
					else if(str[i] == ']') {
						if (d.back() == '[') {
							d.pop_back();
						}
						else {
							break;
						}
					}
					else {
						continue;
					}
				}
			}
		}
		
		if (d.empty()) {
			cout << "yes" << '\n';
		}
		else {
			cout << "no" << '\n';
			int size = d.size();
			for (int i = 0; i < size; i++) {
				d.pop_back();
			}
		}
	} while (str[0] != '.');

}