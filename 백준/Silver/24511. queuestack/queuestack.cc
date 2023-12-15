#include <iostream>
#include <deque>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, num;
	int M;
	int count = 0;
	deque<int> v;
	deque<int> q;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		v.push_back(num);
	}

	for (int i = 0; i < N; i++) {
		cin >> num;
		if (v[i] == 0) {
			q.push_back(num);
		}
		else {
			count++;
		}
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (count == N) {
			cout << num << ' ';
			continue;
		}
		int back = q.back();
		q.push_front(num);
		q.pop_back();
		cout << back << ' ';
	}
}