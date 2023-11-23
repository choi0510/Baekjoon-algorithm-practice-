#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int k, n;
	vector<vector<int>> v(15, vector<int>(15));

	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 15; j++) {
			if (i == 0) {
				v[i][j] = j;
			}
			else {
				for (int k = j; k >= 0; k--) {
					v[i][j] += v[i - 1][k];
				}
			}
		}
	}
	
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << v[k][n] << '\n';
	}
}