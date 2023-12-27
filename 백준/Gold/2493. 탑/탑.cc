#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<pair<int, int>> s;
	int N;
	int height;

	cin >> N;

	for (int i = 1; i <= N; i++) {
		cin >> height;
		while (!s.empty()) {
			if (height < s.top().second) {
				cout << s.top().first << ' ';
				break;
			}
			s.pop();
		}
		if (s.empty()) {
			cout << 0 << ' ';
		}
		s.push({ i, height });
	}
}