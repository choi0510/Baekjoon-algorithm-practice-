#include <iostream>
#include <unordered_set>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int num;
	int count = 0;
	unordered_set<int> s1;
	unordered_set<int> s2;

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> num;
		s1.insert(num);
	}
	for (int i = 0; i < M; i++) {
		cin >> num;
		s2.insert(num);
		if (s1.find(num) != s1.end()) {
			count++;
		}
	}
	
	cout << (s1.size() - count) + (s2.size() - count);
}