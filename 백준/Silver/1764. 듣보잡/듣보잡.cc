#include <iostream>
#include <set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int count = 0;
	string name;
	set<string> s;
	set<string> s1;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> name;
		s.insert(name);
	}
	for (int i = 0; i < M; i++) {
		cin >> name;
		if (s.find(name) != s.end()) {
			count++;
			s1.insert(name);
		}
		else {
			continue;
		}
	}
	
	cout << count << '\n';
	for (auto name : s1) {
		cout << name << '\n';
	}
}