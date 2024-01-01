#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int board[102][102];
bool vis[102][102];
int visCount[102][102];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	string path;
	
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> path;
		for (int j = 0; j < path.size(); j++) {
			board[i][j] = path[j] - '0';
		}
	}

	queue <pair<int, int>> Q;
	Q.push({ 0, 0 });
	vis[0][0] = 1;
	visCount[0][0] = 1;

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (vis[nx][ny] || board[nx][ny] != 1) continue;
			vis[nx][ny] = 1;
			Q.push({ nx, ny });
			visCount[nx][ny] = visCount[cur.first][cur.second] + 1;
		}
	}
	cout << visCount[n-1][m-1];
}