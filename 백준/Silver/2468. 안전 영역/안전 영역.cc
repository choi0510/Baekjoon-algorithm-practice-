#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int area[102][102];
int vis[102][102];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int bfs(int height, int area[102][102], int N) {

	int max_area_count = 0;

	queue<pair<int, int>> Q;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (height < area[i][j] && vis[i][j] == 0) {
				Q.push({ i, j });
				vis[i][j] = 1;
				max_area_count++;
			}

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();
				
				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (vis[nx][ny] || area[nx][ny] == 0 || area[nx][ny] <= height) continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}
		}
	}
	return max_area_count;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int min_height = 100;
	int max_height = 1;
	int max_area_count = 0;
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> area[i][j];
			min_height = min(min_height, area[i][j]);
			max_height = max(max_height, area[i][j]);
		}
	}

	if (min_height == max_height) {
		cout << 1;
		return 0;
	}

	for (int i = min_height; i <= max_height; i++) {
		max_area_count = max(max_area_count ,bfs(i, area, N));

		memset(vis, 0, sizeof(vis));
	}

	cout << max_area_count;
}