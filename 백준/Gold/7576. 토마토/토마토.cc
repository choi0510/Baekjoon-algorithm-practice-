#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int board[1002][1002];
bool vis[1002][1002];
int dis[1002][1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int m, n;
	int min_day_count = 0;

	cin >> m >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 1) {
				Q.push({ i, j });
				vis[i][j] = 1;
				dis[i][j] = 0;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (board[nx][ny] == -1 || vis[nx][ny]) continue;
			vis[nx][ny] = 1;
			dis[nx][ny] = dis[cur.first][cur.second] + 1;
			min_day_count = max(min_day_count, dis[nx][ny]);
			Q.push({ nx, ny });
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j] == 0 && board[i][j] == 0) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << min_day_count;
}