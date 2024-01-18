#include <iostream>
#include <algorithm>
using namespace std;

char star[3075][6200];

void printStar(int N, int x, int y) {
	if (N == 3) {
		star[x][y + 2] = '*';
		star[x + 1][y + 1] = '*';
		star[x + 1][y + 3] = '*';
		star[x + 2][y] = '*';
		star[x + 2][y + 1] = '*';
		star[x + 2][y + 2] = '*';
		star[x + 2][y + 3] = '*';
		star[x + 2][y + 4] = '*';
		return;
	}

	printStar(N / 2, x, y + N / 2);
	printStar(N / 2, x + N / 2, y);
	printStar(N / 2, x + N / 2, y + N);
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;

	cin >> N;

	for (int i = 0; i < N; i++) {
		fill(star[i], star[i] + N, ' ');
	}

	printStar(N, 0, 0);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N * 2 - 1; j++) {
			if (star[i][j] == '*') {
				cout << '*';
			}
			else {
				cout << ' ';
			}
		}
		cout << '\n';
	}
}