#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

char arr[5][5];
bool isused[25];
int cnt;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

bool checkCount() {

	int countS = 0;

	for (int i = 0; i < 25; i++) {

		if (isused[i]) {
			int x = i / 5;
			int y = i % 5;

			if (arr[x][y] == 'S') {
				countS++;
			}
		}
	}

	if (countS < 4) {
		return false;
	}
	else {
		return true;
	}
}

bool bfs() {

	queue<pair<int, int>> Q;

	bool isS[5][5];
	bool vis[5][5];
	bool check = false;

	memset(isS, false, sizeof(isS));
	memset(vis, false, sizeof(vis));

	int queueCount = 0;

	for (int i = 0; i < 25; i++) {
		if (isused[i]) {
			int x = i / 5;
			int y = i % 5;

			isS[x][y] = true;

			if (queueCount == 0) {
				vis[x][y] = true;
				Q.push({ x, y });
				queueCount++;
			}
		}
	}

	int Count = 1;

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		if (Count == 7) {
			check = true;
			break;
		}

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= 5 || ny < 0 || ny >= 5) continue;
			if (vis[nx][ny] || !isS[nx][ny]) continue;
			vis[nx][ny] = true;
			Count++;
			Q.push({ nx, ny });
		}
	}

	if (check) {
		return true;
	}
	else {
		return false;
	}

}

void backtracking(int k, int idx) {
	if (k == 7) {
		if (checkCount()) {
			if (bfs()) {
				cnt++;
			}
		}
		return;
	}

	for (int i = idx; i < 25; i++) {
		if (!isused[i]) {
			isused[i] = true;
			backtracking(k + 1, i);
			isused[i] = false;
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string element;

	for (int i = 0; i < 5; i++) {
		cin >> element;
		for (int j = 0; j < 5; j++) {
			arr[i][j] = element[j];
		}
	}

	backtracking(0, 0);

	cout << cnt;
}