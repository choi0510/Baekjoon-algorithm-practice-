#include <iostream>
#include <set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int count = 0;
	int EnterCount = 1;
	string name;
	set<string> s;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (i == 0 && name == "ENTER") {
			continue;
		}
		else if (i != 0 && name == "ENTER") {
			count += s.size();
			s.clear();
			EnterCount++;
		}
		else {
			s.insert(name);
		}
	}
	if (EnterCount == 1) {
		cout << s.size();
	}
	else {
		cout << s.size() + count;
	}
}