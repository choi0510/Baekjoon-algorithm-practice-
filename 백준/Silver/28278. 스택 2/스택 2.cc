#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int order;
	int num;
	stack<int> s;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == 1) {
			cin >> num;
			s.push(num);
		}
		else if (order == 2) {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
				s.pop();
			}
		}
		else if (order == 3) {
			cout << s.size() << '\n';
		}
		else if (order == 4) {
			if (s.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			if (s.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << s.top() << '\n';
			}
		}
	}
}