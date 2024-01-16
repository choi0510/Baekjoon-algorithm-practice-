#include <iostream>
#include <algorithm>
using namespace std;

char star[2300][2300];

// 재귀
void printStar2(int N, int x, int y) {
	if (N == 1) {
		star[x][y] = '*';
		return;
	}

	N /= 3;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == 1 && j == 1) {
				continue;
			}
			printStar2(N, x + i * N, y + j * N);
		}
	}
}


// 분할 정복 && 재귀
//void printStar(int x, int y, int N) {
//	if (x / N % 3 == 1 && y / N % 3 == 1) {
//		cout << ' ';
//	}
//	else {
//		if (N == 1) {
//			cout << '*';
//		}
//		else {
//			printStar(x, y, N / 3);
//		}
//	}
//}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	
	cin >> N;

	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			printStar(i, j, N);
		}
		cout << '\n';
	}*/

	for (int i = 0; i < N; i++) {
		fill(star[i], star[i] + N, ' ');
	}

	printStar2(N, 0, 0);
	
	for (int i = 0; i < N; i++) {
		cout << star[i] << '\n';
	}
	
}