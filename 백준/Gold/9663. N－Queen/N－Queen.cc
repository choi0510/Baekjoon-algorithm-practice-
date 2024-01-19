#include <iostream>
using namespace std;

int N;
int cnt = 0;
bool isused1[40];
bool isused2[40];
bool isused3[40];

void backtracking(int cur) {
	if (cur == N) {
		cnt++;
		return;
	}

	for (int i = 0; i < N; i++) {
		if (!isused1[i] && !isused2[cur + i] && !isused3[cur - i + N - 1]) {
			isused1[i] = true;
			isused2[cur + i] = true;
			isused3[cur - i + N - 1] = true;
			backtracking(cur + 1);
			isused1[i] = false;
			isused2[cur + i] = false;
			isused3[cur - i + N - 1] = false;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;

	backtracking(0);
	
	cout << cnt;
}