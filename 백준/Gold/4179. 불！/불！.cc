#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int board[1002][1002];
bool vis1[1002][1002];
bool vis2[1002][1002];
int dis1[1002][1002];
int dis2[1002][1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int R, C;
	string element;

	cin >> R >> C;
	
	for (int i = 0; i < R; i++) {
		cin >> element;
		for (int j = 0; j < C; j++) {
			if (element[j] == '#') {
				board[i][j] = -1;
			}
			else if (element[j] == '.') {
				board[i][j] = 0;
			}
			else if (element[j] == 'J') {
				board[i][j] = 1;
			}
			else if (element[j] == 'F') {
				board[i][j] = 2;
			}
		}
	}
	
	queue<pair<int, int>> Q;

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (board[i][j] == 2) {
				Q.push({ i, j });
				vis1[i][j] = 1;
				dis1[i][j] = 0;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (board[nx][ny] == -1 || vis1[nx][ny]) continue;
			vis1[nx][ny] = 1;
			dis1[nx][ny] = dis1[cur.first][cur.second] + 1;
			Q.push({ nx, ny });
		}
	}

	for (int i = 0; i < R; i++) {
		for (int j = 0; j < C; j++) {
			if (board[i][j] == 1) {
				Q.push({i, j});
				vis2[i][j] = 1;
				dis2[i][j] = 0;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
			if (board[nx][ny] == -1 || vis2[nx][ny] == 1 || board[nx][ny] == 2 || ((dis1[nx][ny] <= dis2[cur.first][cur.second] + 1) && dis1[nx][ny] != 0) == 1) {
				continue;
			}
			vis2[nx][ny] = 1;
			dis2[nx][ny] = dis2[cur.first][cur.second] + 1;
			Q.push({ nx, ny });
		}
	}

	int min_count = 1998;
	bool isAllZero = true;
	for (int i = 0; i < C; i++) {
		if (board[0][i] == 1) {
			cout << 1;
			return 0;
		}
		if (dis2[0][i] != 0 && vis2[0][i] > 0) {
			min_count = min(min_count, dis2[0][i]);
			isAllZero = false;
		}
	}

	for (int i = 0; i < R; i++) {
		if (board[i][0] == 1) {
			cout << 1;
			return 0;
		}
		if (dis2[i][0] != 0 && vis2[i][0] > 0) {
			min_count = min(min_count, dis2[i][0]);
			isAllZero = false;
		}
	}

	for (int i = 0; i < C; i++) {
		if (board[R-1][i] == 1) {
			cout << 1;
			return 0;
		}
		if (dis2[R-1][i] != 0 && vis2[R-1][i] > 0) {
			min_count = min(min_count, dis2[R-1][i]);
			isAllZero = false;
		}
	}

	for (int i = 0; i < R; i++) {
		if (board[i][C-1] == 1) {
			cout << 1;
			return 0;
		}
		if (dis2[i][C-1] != 0 && vis2[i][C-1] > 0) {
			min_count = min(min_count, dis2[i][C-1]);
			isAllZero = false;
		}
	}

	if (isAllZero == true) {
		cout << "IMPOSSIBLE";
		return 0;
	}

	cout << min_count + 1;
}