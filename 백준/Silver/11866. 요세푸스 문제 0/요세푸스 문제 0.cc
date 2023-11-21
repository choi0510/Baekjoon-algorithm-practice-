#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	vector<int> v;
	queue<int> q;

	cin >> N >> K;

	int inc = K - 1;

	for (int i = 0; i < N; i++) {
		v.push_back(i + 1);
	}

	for (int i = 0; i < N; i++) {
		if (K > v.size()) {
			while (K > v.size()) {
				K -= v.size();
			}
			q.push(v[K - 1]);
			v.erase(v.begin() + K - 1);
			K += inc;
		}
		else {
			q.push(v[K - 1]);
			v.erase(v.begin() + K - 1);
			K += inc;
		}
	}
	cout << "<";
	for (int i = 0; i < N; i++) {
		if (q.size() == 1) {
			cout << q.front();
			q.pop();
		}
		else {
			cout << q.front() << ", ";
			q.pop();
		}
	}
	cout << ">";
}