#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int board[502][502];
bool vis[502][502];
int dx[4] = { 1, 0 , -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	int maxPaintWidth = 0;
	int PaintWidth = 0;
	int PaintCount = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			PaintWidth = 0;
			if (board[i][j] != 0 && vis[i][j] == false) {

				Q.push({ i, j });
				vis[i][j] = 1;

				while (!Q.empty()) {
					pair<int, int> cur = Q.front();
					Q.pop();
					PaintWidth++;

					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny] != 1) continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
				PaintCount++;
				maxPaintWidth = max(maxPaintWidth, PaintWidth);
			}
		}
	}

	cout << PaintCount << '\n' << maxPaintWidth;
}