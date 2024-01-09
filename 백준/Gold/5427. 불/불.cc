#include <iostream>
#include <queue>
#include <vector>
#include <cstring>
using namespace std;

int building[1003][1003];
int visFire[1003][1003];
int visSang[1003][1003];
int disFire[1003][1003];
int disSang[1003][1003];

bool isEscape = false;

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int Fire(int w, int h, string element, queue<pair<int, int>> Q) {

	isEscape = false;

	for (int i = 0; i < h; i++) {
		cin >> element;
		for (int j = 0; j < element.size(); j++) {
			if (element[j] == '#') {
				building[i][j] = -1;
			}
			else if (element[j] == '.') {
				building[i][j] = 0;
			}
			else if (element[j] == '@') {
				building[i][j] = 1;
			}
			else {
				building[i][j] = 2;
				Q.push({ i, j });
				visFire[i][j] = 1;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) continue;
			if (building[nx][ny] == -1 || visFire[nx][ny]) continue;
			visFire[nx][ny] = 1;
			disFire[nx][ny] = disFire[cur.first][cur.second] + 1;
			Q.push({ nx, ny });
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			if (building[i][j] == 1) {
				Q.push({ i, j });
				visSang[i][j] = 1;
			}
		}
	}

	while (!Q.empty()) {
		pair<int, int> cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= h || ny < 0 || ny >= w) {
				cout << disSang[cur.first][cur.second] + 1 << '\n';
				return 0;
			}
			if (visSang[nx][ny] || building[nx][ny] == -1 || building[nx][ny] == 2 || ( disFire[nx][ny] != 0 && disFire[nx][ny] <= disSang[cur.first][cur.second] + 1)) continue;
			visSang[nx][ny] = 1;
			disSang[nx][ny] = disSang[cur.first][cur.second] + 1;
			Q.push({ nx, ny });
		}
	}
	cout << "IMPOSSIBLE" << '\n';
	return 0;
}

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int w, h;
	
	string element;

	queue<pair<int, int>> Q;

	cin >> T; 

	while (T--) {

		cin >> w >> h;

		Fire(w, h, element, Q);

		memset(building, 0, sizeof(building));
		memset(visFire, 0, sizeof(visFire));
		memset(visSang, 0, sizeof(visSang));
		memset(disFire, 0, sizeof(disFire));
		memset(disSang, 0, sizeof(disSang));

		while (!Q.empty()) {
			Q.pop();
		}
	}
	return 0;
}