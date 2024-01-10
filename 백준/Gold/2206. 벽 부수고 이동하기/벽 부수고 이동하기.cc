#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int map[1002][1002];
int vis[1002][1002][2];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	string element;
	int N, M;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> element;
		for (int j = 0; j < M; j++) {
			if (element[j] == '0') {
				map[i][j] = 0;
			}
			else {
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
		int block = cur.second;
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first.first + dx[dir];
			int ny = cur.first.second + dy[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
			if (map[nx][ny] == 1 && block == 0) {
				vis[nx][ny][block + 1] = vis[cur.first.first][cur.first.second][block] + 1;
				Q.push({ {nx, ny}, block + 1 });
			}
			else if (map[nx][ny] == 0 && vis[nx][ny][block] == 0) {
				vis[nx][ny][block] = vis[cur.first.first][cur.first.second][block] + 1;
				Q.push({ {nx, ny}, block });
			}

			if (nx == N - 1 && ny == M - 1) {
				cout << vis[nx][ny][block];
				return 0;
			}
		}
	}

	if (vis[N][M][0] == 0 && vis[N][M][1] == 0) {
		cout << -1;
	}
}