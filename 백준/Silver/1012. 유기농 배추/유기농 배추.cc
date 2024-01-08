#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int M, N;
	int K;
	int X, Y;
	int count = 0;

	cin >> T;

	while (T--) {

		int land[52][52] = { 0, };
		int vis[52][52] = { 0, };
		count = 0;

		queue<pair<int, int>> Q;

		cin >> M >> N >> K;
		for (int i = 0; i < K; i++) {
			cin >> X >> Y;
			land[Y][X] = 1;
		}

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {

				if (vis[i][j] || land[i][j] == 0) continue;
				if (vis[i][j] == 0 || land[i][j]) {
					Q.push({ i, j });
					vis[i][j] = 1;
				}

				while (!Q.empty()) {
					pair<int, int> cur = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.first + dx[dir];
						int ny = cur.second + dy[dir];
						if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
						if (vis[nx][ny] || land[nx][ny] == 0) continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
				count++;
			}
		}

		cout << count << '\n';
		
	}
}