#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[8] = { -2, -2, -1, -1, 1, 1, 2, 2 };
int dy[8] = { 1, -1, 2, -2, 2, -2, 1, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int I;
	int sx, sy, ex, ey;
	int knight_move_count = 0;

	cin >> T;
	
	while (T--) {

		int knight[301][301] = { 0, };
		int dis[301][301] = { 0, };
		knight_move_count = 0;

		queue<pair<int, int>> Q;

		cin >> I;
		
		cin >> sx >> sy;
		Q.push({ sx, sy });
		knight[sx][sy] = 1;

		cin >> ex >> ey;

		while (!Q.empty()) {
			pair<int, int> cur = Q.front();
			Q.pop();
			for (int dir = 0; dir < 8; dir++) {
				int nx = cur.first + dx[dir];
				int ny = cur.second + dy[dir];
				if (nx < 0 || nx >= I || ny < 0 || ny >= I) continue;
				if (knight[nx][ny]) continue;
				knight[nx][ny] = 1;
				dis[nx][ny] = dis[cur.first][cur.second] + 1;
				if (nx == ex && ny == ey) {
					break;
				}
				Q.push({ nx, ny });
			}
		}

		cout << dis[ex][ey] << '\n';
	}
}