#include <iostream>
#include <cstring>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	char str[101];
	cin >> str;
	int len = strlen(str);
	int count = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] == 'c') {
			if (str[i + 1] == '=' || str[i + 1] == '-') {
				count++;
				i++;
			}
			else {
				count++;
			}
		}
		else if (str[i] == 'd') {
			if (str[i + 1] == '-') {
				count++;
				i++;
			}
			else if (str[i + 1] == 'z') {
				if (str[i + 2] == '=') {
					count++;
					i += 2;
				}
				else {
					count++;
				}
			}
			else {
				count++;
			}
		} else if (str[i] == 'l') {
			if (str[i + 1] == 'j') {
				count++;
				i++;
			}
			else {
				count++;
			}
		} else if (str[i] == 'n') {
			if (str[i + 1] == 'j') {
				count++;
				i++;
			}
			else {
				count++;
			}
		} else if (str[i] == 's') {
			if (str[i + 1] == '=') {
				count++;
				i++;
			}
			else {
				count++;
			}
		} else if (str[i] == 'z') {
			if (str[i + 1] == '=') {
				count++;
				i++;
			}
			else {
				count++;
			}
		}
		else {
			count++;
		}
	}
	cout << count;
}