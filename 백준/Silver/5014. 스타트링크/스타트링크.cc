#include <iostream>
#include <queue>
using namespace std;

int elevator[2000003];
int dis[2000003];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int F, S, G, U, D;

	cin >> F >> S >> G >> U >> D;

	if (S == G) {
		cout << 0;
		return 0;
	}

	int dx[2] = { -1 * D, 1 * U };

	queue<int> Q;
	Q.push(S);
	elevator[S] = 1;

	while (!Q.empty()) {
		int cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 2; dir++) {
			int nx = cur + dx[dir];
			if (nx <= 0 || nx > F) continue;
			if (elevator[nx]) continue;
			elevator[nx] = 1;
			dis[nx] = dis[cur] + 1;
			Q.push(nx);
		}
	}

	if (dis[G] == 0) {
		cout << "use the stairs";
	}
	else {
		cout << dis[G];
	}
}