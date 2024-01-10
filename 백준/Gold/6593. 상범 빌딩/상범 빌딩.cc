#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

int building[31][31][31];
int vis[31][31][31];
int dis[31][31][31];
int dx[6] = { 0, 1, 0, -1, 0, 0 };
int dy[6] = { 1, 0, -1, 0, 0, 0 };
int dz[6] = { 0, 0, 0, 0, -1, 1 };

void bfs(int L, int R, int C) {

	string element;
	int EL= 0, ER = 0, EC = 0;

	for (int i = 0; i < L; i++) {
		for (int j = 0; j < R; j++) {
			cin >> element;
			for (int k = 0; k < C; k++) {
				if (element[k] == '#') {
					building[i][j][k] = -1;
				}
				else if (element[k] == '.') {
					building[i][j][k] = 0;
				}
				else if (element[k] == 'S') {
					building[i][j][k] = 1;
				}
				else {
					building[i][j][k] = 2;
					EL = i;
					ER = j;
					EC = k;
				}
			}
		}
	}

	queue<pair<pair<int, int>, int>> Q;

	for (int i = 0; i < L; i++) {
		for (int j = 0; j < R; j++) {
			for (int k = 0; k < C; k++) {
				if (building[i][j][k] == 1) {
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
			if (nx < 0 || nx >= R || ny < 0 || ny >= C || nz < 0 || nz >= L) continue;
			if (building[nz][nx][ny] == -1 || vis[nz][nx][ny]) continue;
			vis[nz][nx][ny] = 1;
			dis[nz][nx][ny] = dis[cur.first.first][cur.first.second][cur.second] + 1;
			Q.push({ {nz, nx}, ny });
		}
	}

	if (vis[EL][ER][EC] == 0 && dis[EL][ER][EC] == 0) {
		cout << "Trapped!" << '\n';
	}
	else {
		cout << "Escaped in " << dis[EL][ER][EC] << " minute(s)." << '\n';
	}
	
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int L = 1, R = 1, C = 1;

	while (L != 0 && R != 0 && C != 0) {
		cin >> L >> R >> C;
		
		if (!L && !R && !C) {
			return 0;
		}

		bfs(L, R, C);

		memset(building, 0, sizeof(building));
		memset(vis, 0, sizeof(vis));
		memset(dis, 0, sizeof(dis));
	}
}