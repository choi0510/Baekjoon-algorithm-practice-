#include <iostream>
#include <queue>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string order;
	int num;
	queue<int> q;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> order;
		if (order == "push") {
			cin >> num;
			q.push(num);
		}
		else if (order == "front") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.front() << '\n';
			}
		}
		else if (order == "back") {
			if (q.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << q.back() << '\n';
			}
		}
		else if (order == "size") {
			cout << q.size() << '\n';
		}
		else if (order == "empty") {
			if (q.empty()) {
				cout << 1 << '\n';
			}
			else {
				cout << 0 << '\n';
			}
		}
		else if (order == "pop") {
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