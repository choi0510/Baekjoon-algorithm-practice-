#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string order;
	stack<char> st;
	int count = 0;

	cin >> order;
	for (int i = 0; i < order.size(); i++) {
		if (order[i] == '(') {
			st.push(order[i]);
		}
		else {
			if (order[i - 1] == ')') {
				st.pop();
				count += 1;
			}
			else {
				st.pop();
				count += st.size();
			}
		}
	}
	cout << count;
}