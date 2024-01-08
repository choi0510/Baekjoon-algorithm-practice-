#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int colorBoardCanSee[103][103];
int colorBoardCantSee[103][103];
int visCanSee[103][103];
int visCantSee[103][103];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	string color;
	cin >> N;
	
	for (int i = 0; i < N; i++) {
		cin >> color;
		for (int j = 0; j < color.size(); j++) {
			if (color[j] == 'R') {
				colorBoardCanSee[i][j] = 1;
			}
			else if (color[j] == 'G') {
				colorBoardCanSee[i][j] = 2;
			}
			else {
				colorBoardCanSee[i][j] = 3;
			}
		}

		for (int j = 0; j < color.size(); j++) {
			if (color[j] == 'R' || color[j] == 'G') {
				colorBoardCantSee[i][j] = 1;
			}
			else {
				colorBoardCantSee[i][j] = 2;
			}
		}
	}

	queue<pair<int, int>> Q1;
	queue<pair<int, int>> Q2;
	int count1 = 0;
	int count2 = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visCanSee[i][j]) continue;
			Q1.push({ i, j });
			visCanSee[i][j] = 1;

			while (!Q1.empty()) {
				pair<int, int> cur = Q1.front();
				Q1.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (visCanSee[nx][ny] || (colorBoardCanSee[nx][ny] != colorBoardCanSee[cur.first][cur.second])) continue;
					visCanSee[nx][ny] = 1;
					Q1.push({ nx, ny });
				}
			}
			count1++;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (visCantSee[i][j]) continue;
			Q2.push({ i, j });
			visCantSee[i][j] = 1;

			while (!Q2.empty()) {
				pair<int, int> cur = Q2.front();
				Q2.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (visCantSee[nx][ny] || (colorBoardCantSee[nx][ny] != colorBoardCantSee[cur.first][cur.second])) continue;
					visCantSee[nx][ny] = 1;
					Q2.push({ nx, ny });
				}
			}
			count2++;
		}
	}

	cout << count1 << ' ' << count2;
}