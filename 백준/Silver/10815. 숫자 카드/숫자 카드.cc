#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	unordered_set<int> s;
	int N, M;
	int num;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		s.insert(num);
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		if (s.find(num) != s.end()) {
			cout << 1 << ' ';
		}
		else {
			cout << 0 << ' ';
		}
	}
}