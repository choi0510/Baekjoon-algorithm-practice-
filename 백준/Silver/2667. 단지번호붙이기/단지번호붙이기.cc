#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int map[26][26];
int vis[26][26];
int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int danziCount = 0;
	int houseCount = 0;
	vector<int> houseArr;

	cin >> N;
	string house;

	for (int i = 0; i < N; i++) {
		cin >> house;
		for (int j = 0; j < N; j++) {
			map[i][j] = house[j] - '0';
		}
	}

	queue<pair<int, int>> Q;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (vis[i][j] != 1 && map[i][j] != 0) {
				Q.push({ i, j });
				vis[i][j] = 1;
				danziCount++;
			}

			while (!Q.empty()) {
				pair<int, int> cur = Q.front();
				Q.pop();

				for (int dir = 0; dir < 4; dir++) {
					int nx = cur.first + dx[dir];
					int ny = cur.second + dy[dir];
					if (nx < 0 || nx >= N || ny < 0 || ny >= N) continue;
					if (map[nx][ny] == 0 || vis[nx][ny]) continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
				houseCount++;
			}

			if (houseCount > 0) {
				houseArr.push_back(houseCount);
				houseCount = 0;
			}
		}
	}

	sort(houseArr.begin(), houseArr.end());

	cout << danziCount << '\n';
	for (int i = 0; i < houseArr.size(); i++) {
		cout << houseArr[i] << '\n';
	}
}