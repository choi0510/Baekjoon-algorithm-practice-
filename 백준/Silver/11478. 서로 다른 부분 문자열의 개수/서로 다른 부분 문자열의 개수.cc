#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	unordered_set<string> s2;
	string str;

	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		for (int j = 1; i + j <= str.size(); j++) {
			s2.insert(str.substr(i, j));
		}
	}

	cout << s2.size();
}