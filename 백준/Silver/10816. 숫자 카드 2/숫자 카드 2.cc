#include <iostream>
#include <map> 
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);
	map<int, int> m;

	int N, M;
	int num;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> num;
		m.insert({ num, 0 });
		m[num]++;
	}

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		cout << m[num] << ' ';
	}
}