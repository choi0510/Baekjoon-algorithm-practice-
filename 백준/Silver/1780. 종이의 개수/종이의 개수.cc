#include <iostream>
using namespace std;

int paper[2200][2200];
int countArr[3]; // { -1, 0, 1 }

bool check(int x, int y, int N) {
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (paper[x][y] != paper[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int countPapers(int x, int y, int N) {
	if (check(x, y, N)) {
		if (paper[x][y] == -1) {
			countArr[0]++;
		}
		else if (paper[x][y] == 0) {
			countArr[1]++;
		}
		else {
			countArr[2]++;
		}
	}
	else {
		N /= 3;
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				countPapers(x + i * N, y + j * N, N);
			}
		}
	}

	return 0;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> paper[i][j];
		}
	}

	countPapers(0, 0, N);

	for (int i = 0; i < 3; i++) {
		cout << countArr[i] << '\n';
	}
}