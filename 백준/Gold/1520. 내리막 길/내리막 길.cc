#include <iostream>
#include <vector>
using namespace std;

int map[503][503];
int dp[503][503];
int dx[4] = { 0, -1, 0, 1 };
int dy[4] = { -1, 0, 1, 0 };
int M, N;

int dfs(int x, int y) {
	if (dp[x][y] != -1) {
		return dp[x][y];
	}
	else if (x == M - 1 && y == N - 1) {
		return 1;
	}
	else {
		dp[x][y] = 0;
		for (int dir = 0; dir < 4; dir++) {
			int nx = x + dx[dir];
			int ny = y + dy[dir];
			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
			if (map[nx][ny] >= map[x][y]) continue;
			dp[x][y] += dfs(nx, ny);
		}
	}
	return dp[x][y];
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> M >> N;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
			dp[i][j] = -1;
		}
	}

	cout << dfs(0, 0);
}