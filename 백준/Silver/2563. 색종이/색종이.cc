#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n;
	int count = 0;
	vector<vector<int>> v(101, vector<int>(101, 0));

	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		int xmax = x + 10;
		int ymax = y + 10;

		for (int i = x; i < xmax; i++) {
			for (int j = y; j < ymax; j++) {
				v[i][j] = 1;
			}
		}
	}

	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (v[i][j] == 1) {
				count++;
			}
		}
	}

	cout << count;
}