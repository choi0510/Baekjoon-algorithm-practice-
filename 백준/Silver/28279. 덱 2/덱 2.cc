#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int order;
	int num;
	deque<int> dq;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == 1) {
			cin >> num;
			dq.push_front(num);
		}
		else if (order == 2) {
			cin >> num;
			dq.push_back(num);
		}
		else if (order == 3) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (order == 4) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (order == 5) {
			cout << dq.size() << '\n'; 
		}
		else if (order == 6) {
			if (dq.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == 7) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (order == 8) {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}
}