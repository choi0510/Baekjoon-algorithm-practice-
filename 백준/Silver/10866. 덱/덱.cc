#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string inst;
	int num;
	deque<int> dq;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> inst;
		if (inst == "push_front") {
			cin >> num;
			dq.push_front(num);
		}
		else if (inst == "push_back") {
			cin >> num;
			dq.push_back(num);
		}
		else if (inst == "pop_front") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
				dq.pop_front();
			}
		}
		else if (inst == "pop_back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
				dq.pop_back();
			}
		}
		else if (inst == "size") {
			cout << dq.size() << '\n';
		}
		else if (inst == "empty") {
			if (dq.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (inst == "front") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.front() << '\n';
			}
		}
		else if (inst == "back") {
			if (dq.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << dq.back() << '\n';
			}
		}
	}
}