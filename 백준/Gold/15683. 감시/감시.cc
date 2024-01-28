#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;

int N, M;
int cctvCount;  // cctv 개수

int room[10][10];   // 숫자 cctv 번호 저장 목적

int min_zone = 64;
vector<pair<int, int>> v;  // cctv 좌표 저장 목적

vector<vector<int>> directions[6] = {
	{},
	{ {0}, {1}, {2}, {3} },    // 1번 cctv
	{ {0, 2}, {1, 3}, {0, 2}, {1, 3} },  // 2번 cctv
	{ {0, 3}, {2, 3}, {1, 2}, {0, 1} },  // 3번 cctv
	{ {1, 2, 3}, {0, 1, 2}, {0, 1, 3}, {0, 2, 3} },  // 4번 cctv
	{ {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3}, {0, 1, 2, 3} },  // 5번 cctv
};

int dx[4] = { 0, 1, 0, -1 };  // 우, 하, 좌, 상
int dy[4] = { 1, 0, -1, 0 };

void bfs(int x, int y, vector<int> dir) {

	int copy_x = x;
	int copy_y = y;

	for (int i = 0; i <= dir.size(); i++) {
		if (i == dir.size()) {
			return;
		}

		copy_x = x;
		copy_y = y;

		while (true) {
			int nx = copy_x + dx[dir[i]];
			int ny = copy_y + dy[dir[i]];
			copy_x = nx;
			copy_y = ny;
			if (nx < 0 || nx >= N || ny < 0 || ny >= M) break;
			if (room[nx][ny] == 6) break;
			if (room[nx][ny] != 0) continue;
			room[nx][ny] = -1;
		}
	}
}

void backtracking(int k) {
	if (k == cctvCount) {

		int zone = 0;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (room[i][j] == 0) {
					zone++;
				}
			}
		}

		min_zone = min(min_zone, zone);
		return;
	}

	int x = v[k].first;
	int y = v[k].second;
	int cctv[10][10];

	for (int dir = 0; dir < 4; dir++) {

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cctv[i][j] = room[i][j];
			}
		}

		int col = room[x][y];

		bfs(x, y, directions[col][dir]);

		backtracking(k + 1);

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				room[i][j] = cctv[i][j];
			}
		}
	}
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> room[i][j];
			if (room[i][j] != 0 && room[i][j] != 6) {
				cctvCount++;
				v.push_back({ i, j });
			}
		}
	}

	backtracking(0);

	cout << min_zone;
}