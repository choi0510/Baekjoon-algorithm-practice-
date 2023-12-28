#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int count = 0;
	string word;
	stack<char> st;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> word;
		for (int j = 0; j < word.size(); j++) {
			if (word[j] == 'A') {
				if (st.empty()) {
					st.push(word[j]);
				}
				else {
					if (st.top() == 'A') {
						st.pop();
					}
					else {
						st.push(word[j]);
					}
				}
			}
			else {
				if (st.empty()) {
					st.push(word[j]);
				}
				else {
					if (st.top() == 'B') {
						st.pop();
					}
					else {
						st.push(word[j]);
					}
				}
			}
		}

		if (!st.empty()) {
			while (!st.empty()) {
				st.pop();
			}
			continue;
		}
		else {
			count++;
		}
	}
	cout << count;
}