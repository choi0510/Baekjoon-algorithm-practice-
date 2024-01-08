#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int tomatoTank[103][103][103];
int vis[103][103][103];
int dis[103][103][103];
int dx[6] = { 0, 1, 0, -1, 0, 0 };
int dy[6] = { 1, 0, -1, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0 , -1, 1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int M, N, H;
	int min_count_day = 0;
	queue<pair<pair<int, int>, int>> Q;

	cin >> M >> N >> H;

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				cin >> tomatoTank[i][j][k];
				if (tomatoTank[i][j][k] == 1) {
					Q.push({ {i, j}, k });
					vis[i][j][k] = 1;
				}
			}
		}
	}

	while (!Q.empty()) {
		pair<pair<int, int>, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 6; dir++) {
			int nx = cur.first.second + dx[dir];
			int ny = cur.second + dy[dir];
			int nz = cur.first.first + dz[dir];
			if (nx < 0 || nx >= N || ny < 0 || ny >= M || nz < 0 || nz >= H) continue;
			if (tomatoTank[nz][nx][ny] == -1 || vis[nz][nx][ny]) continue;
			vis[nz][nx][ny] = 1;
			dis[nz][nx][ny] = dis[cur.first.first][cur.first.second][cur.second] + 1;
			min_count_day = max(min_count_day, dis[nz][nx][ny]);
			Q.push({ {nz, nx}, ny });
		}
	}

	for (int i = 0; i < H; i++) {
		for (int j = 0; j < N; j++) {
			for (int k = 0; k < M; k++) {
				if (tomatoTank[i][j][k] == 0 && vis[i][j][k] == 0) {
					cout << -1;
					return 0;
				}
			}
		}
	}

	cout << min_count_day;
}
