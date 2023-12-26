#include <iostream>
#include <list>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string word;
	int M;
	string order;
	char alpha;
	list<char> L;

	cin >> word;
	for (int i = 0; i < word.size(); i++) {
		L.push_back({ word[i] });
	}
	auto t = L.end();
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> order;
		if (order == "L") {
			if (t != L.begin()) {
				t--;
			}
		}
		else if (order == "D") {
			if (t != L.end()) {
				t++;
			}
		}
		else if (order == "B") {
			if (t != L.begin()) {
				t--;
				t = L.erase(t);
			}
			
		}
		else if (order == "P") {
			cin >> alpha;
			L.insert(t, alpha);
		}
	}

	for (auto i : L) {
		cout << i;
	}
}