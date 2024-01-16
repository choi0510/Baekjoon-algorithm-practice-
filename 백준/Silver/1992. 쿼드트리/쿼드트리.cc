#include <iostream>
#include <vector>
using namespace std;

int video[65][65];
vector<int> v; // push (0 or 1)

bool check(int x, int y, int N) {
	for (int i = x; i < x + N; i++) {
		for (int j = y; j < y + N; j++) {
			if (video[x][y] != video[i][j]) {
				return false;
			}
		}
	}
	return true;
}

int printQuadTree(int x, int y, int N) {
	if (check(x, y, N)) {
		if (video[x][y] == 0) {
			cout << 0;
		}
		else {
			cout << 1;
		}
	}
	else {
		N /= 2;
		cout << '(';
		for (int i = 0; i < 2; i++) {
			for (int j = 0; j < 2; j++) {
				printQuadTree(x + i * N, y + j * N, N);
			}
		}
		cout << ')';
	}

	return 0;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string nums;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> nums;
		for (int j = 0; j < N; j++) {
			if (nums[j] == '0') {
				video[i][j] = 0;
			}
			else {
				video[i][j] = 1;
			}
		}
	}

	printQuadTree(0, 0, N);
}