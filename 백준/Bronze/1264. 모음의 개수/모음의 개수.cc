#include <iostream>
#include <string>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string str;
	int count = 0;

	while (true) {
		count = 0;
		getline(cin, str);
		if (str.size() == 1 && str == "#") {
			break;
		}
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
				count++;
			}
		}
		cout << count << '\n';
	}
}