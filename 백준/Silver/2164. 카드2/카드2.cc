#include <iostream>
#include <deque>
using namespace std;

int main() {
	
	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	deque<int> dq;

	cin >> N;

	for (int i = 0; i < N; i++) {
		dq.push_back(i + 1);
	}

	while (dq.size() != 1) {
		dq.pop_front();
		dq.push_back(dq.front());
		dq.pop_front();
	}

	cout << dq.front();
}