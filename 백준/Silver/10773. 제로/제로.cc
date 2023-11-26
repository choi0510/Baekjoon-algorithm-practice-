#include <iostream>
#include <stack>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	stack<int> s;
	int K;
	int num;
	int sum = 0;

	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	int size = s.size();

	for (int i = 0; i < size; i++) {
		sum += s.top();
		s.pop();
	}

	cout << sum;
}