#include <iostream>
#include <deque>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int num;
	deque<int> dq;
	stack<int> result_s;
	stack<int> wait_s;

	cin >> N;

	result_s.push(0);

	for (int i = 0; i < N; i++) {
		cin >> num;
		dq.push_back(num);
	}

	for (int i = 0; ; i++) {
		if (!dq.empty()) {
			if (result_s.top() + 1 == dq.front()) {
				dq.pop_front();
				result_s.push(result_s.top() + 1);
			}
			else {
				if (!wait_s.empty()) {
					if (result_s.top() + 1 == wait_s.top()) {
						wait_s.pop();
						result_s.push(result_s.top() + 1);
					}
					else {
						int dq_copy = dq.front();
						dq.pop_front();
						wait_s.push(dq_copy);
					}
				}
				if (wait_s.empty()) {
					int dq_copy = dq.front();
					dq.pop_front();
					wait_s.push(dq_copy);
				}
			}
		}
		else {
			if (!wait_s.empty()) {
				if (result_s.top() + 1 == wait_s.top()) {
					wait_s.pop();
					result_s.push(result_s.top() + 1);
				}
				else {
					cout << "Sad";
					return 0;
				}
			}
			else {
				cout << "Nice";
				return 0;
			}
		}
	}
}