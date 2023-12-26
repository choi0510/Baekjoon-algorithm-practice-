#include <iostream>
#include <list>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string order;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> order;
		list<char> L;
		auto t = L.begin();
		for (int j = 0; j < order.size(); j++) {
			if (order[j] == '<') {
				if (t != L.begin()) {
					t--;
				}
			}
			else if (order[j] == '>') {
				if (t != L.end()) {
					t++;
				}
			}
			else if (order[j] == '-') {
				if (t != L.begin()) {
					t--;
					t = L.erase(t);
				}
			}
			else {
				L.insert(t, order[j]);
			}
		}
		for (auto i : L) {
			cout << i;
		}
		cout << '\n';
	}
}