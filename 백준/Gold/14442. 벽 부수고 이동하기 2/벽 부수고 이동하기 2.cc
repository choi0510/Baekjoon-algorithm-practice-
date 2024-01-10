#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int map[1001][1001];
int vis[11][1001][1001];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M, K;
	cin >> N >> M >> K;

	string element;

	for (int i = 0; i < N; i++) {
		cin >> element;
		for (int j = 0; j < M; j++) {
			if (element[j] == '1') {
				map[i][j] = 1;
			}
		}
	}

	if (N == 1 && M == 1) {
		cout << 1;
		return 0;
	}

	queue<pair<pair<int, int>, int>> Q;
	Q.push({ {0, 0}, 0 });
	vis[0][0][0] = 1;

	while (!Q.empty()) {
		pair<pair<int, int>, int> cur = Q.front();
		Q.pop();
		int x = cur.first.second;
		int y = cur.second;
		int block = cur.first.first;

		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (nx == N - 1 && ny == M - 1) {
				cout << vis[block][x][y] + 1;
				return 0;
			}
			if (map[nx][ny] == 1) {
				if (block == K) continue;
				if (vis[block + 1][nx][ny] != 0) continue;
				vis[block + 1][nx][ny] = vis[block][cur.first.second][cur.second] + 1;
				Q.push({ {block + 1, nx}, ny });
			}
			else if (map[nx][ny] == 0 && vis[block][nx][ny] == 0) {
				vis[block][nx][ny] = vis[block][cur.first.second][cur.second] + 1;
				Q.push({ {block, nx}, ny });
			}
		}
	}

	cout << -1;

}