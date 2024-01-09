#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

int paper[103][103];
int vis[103][103];
int countPaper = 0;
int countPaperWidth = 0;
vector<int> countPaperWidthArr;
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int M, N, K;
	int sx, sy, ex, ey;

	cin >> M >> N >> K;

	for (int i = 0; i < K; i++) {
		cin >> sx >> sy >> ex >> ey;

		for (int j = sx; j < ex; j++) {
			for (int k = sy; k < ey; k++) {
				paper[j][k] = 1;
			}
		}
	}

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (paper[i][j] == 0) {
				paper[i][j] = 2;
			}
			continue;
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			
			if (vis[i][j] == 0 && paper[i][j] == 2) {
				Q.push({ i, j });
				vis[i][j] = 1;
				countPaper++;
			}

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
					if (vis[nx][ny] || paper[nx][ny] == 1) continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
				countPaperWidth++;
			}

			if (countPaperWidth != 0) {
				countPaperWidthArr.push_back(countPaperWidth);
				countPaperWidth = 0;
			}
		}
	}

	cout << countPaper << '\n';

	sort(countPaperWidthArr.begin(), countPaperWidthArr.end());

	for (int i = 0; i < countPaperWidthArr.size(); i++) {
		cout << countPaperWidthArr[i] << ' ';
	}
}