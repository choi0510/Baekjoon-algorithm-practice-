#include <iostream>
#include <queue>
using namespace std;

int dis[200003];
int vis[200003];
int dx[3] = { -1, 1, 2 };

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	cin >> N >> K;

	queue<int> Q;
	Q.push(N);
	vis[N] = 1;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 3; dir++)
		{
			int nx = cur;
			if (dir == 2) {
				nx = cur * dx[dir];
			}
			else {
				nx = cur + dx[dir];
			}

			if (nx < 0 || nx >= 200003) continue;
			if (vis[nx]) continue;
			vis[nx] = 1;
			dis[nx] = dis[cur] + 1;
			Q.push(nx);
		}
	}

	cout << dis[K];
}