#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	string inst;
	queue<int> q;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> inst;
		if (inst == "push") {
			cin >> num;
			q.push(num);
		}
		else if (inst == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (inst == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
		else if (inst == "size") {
			cout << q.size() << '\n';
		}
		else if (inst == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
				q.pop();
			}
		}
	}
}