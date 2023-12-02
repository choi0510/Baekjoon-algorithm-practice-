#include <iostream>
#include <set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int M;
	int num;
	string order;
	set<int> s, temp;

	for (int i = 1; i <= 20; i++) {
		temp.insert(i);
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> order;
		if (order == "add") {
			cin >> num;
			s.insert(num);
		}
		else if (order == "remove") {
			cin >> num;
			if (s.find(num) == s.end()) {
				continue;
			}
			else {
				s.erase(num);
			}
		}
		else if (order == "check") {
			cin >> num;
			if (s.find(num) != s.end()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "toggle") {
			cin >> num;
			if (s.find(num) != s.end()) {
				s.erase(num);
			}
			else {
				s.insert(num);
			}
		}
		else if (order == "all") {
			s = temp;
		}
		else if (order == "empty") {
			s.clear();
		}
	}
}