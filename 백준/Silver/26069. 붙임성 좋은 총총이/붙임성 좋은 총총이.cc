#include <iostream>
#include <map>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string name1;
	string name2;
	map<string, bool> m;

	cin >> N;
	for (int i = 0; i < N; i++) {

		cin >> name1 >> name2;

		if (name1 == "ChongChong") {
			m.insert({ name2, true });
			continue;
		}
		else if (name2 == "ChongChong") {
			m.insert({ name1, true });
			continue;
		}

		if (m.find(name1) != m.end()) {
			if (m[name1] == true) {
				m.insert({ name2, true });
			}
		}
		else if (m.find(name2) != m.end()) {
			if (m[name2] == true) {
				m.insert({ name1, true });
			}
		}
		else {
			continue;
		}
	}
	cout << m.size() + 1;
}