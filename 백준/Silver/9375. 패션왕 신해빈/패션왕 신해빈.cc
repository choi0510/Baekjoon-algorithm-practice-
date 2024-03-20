#include <iostream>
#include <string>
#include <map>
using namespace std;

int T;
int n;
string name, genre;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> T;

	while (T--) {
		cin >> n;
		map<string, int> m;
		for (int i = 0; i < n; i++) {
			cin >> name >> genre;
			if (m.find(genre) == m.end()) {
				m.insert({ genre, 1 });
			}
			else {
				m[genre]++;
			}
		}

		int count = 1;
		for (auto item : m) {
			count *= item.second + 1;
		}

		count -= 1;
		cout << count << '\n';
	}
}