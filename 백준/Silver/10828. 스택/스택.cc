#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string inst;
	int num;
	stack<int> st;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> inst;
		if (inst == "push") {
			cin >> num;
			st.push(num);
		}
		else if (inst == "top") {
			if (st.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
			}
			
		}
		else if (inst == "size") {
			cout << st.size() << '\n';
		}
		else if (inst == "empty") {
			cout << st.empty() << '\n';
		}
		else if (inst == "pop") {
			if (st.empty()) {
				cout << -1 << '\n';
			}
			else {
				cout << st.top() << '\n';
				st.pop();
			}
			
		}
	}
}