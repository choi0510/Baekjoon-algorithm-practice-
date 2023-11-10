#include <iostream>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	char c;

	cin >> N >> M;
	int count = 0;
	int count1 = 0;
	int count3 = 0;
	vector<vector<char>> v(N, vector<char>(M));
	vector<int> v3;

	vector<vector<char>> v1 = {
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' }
	};

	vector<vector<char>> v2 = {
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
		{ 'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B' },
		{ 'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W' },
	};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> c;
			v[i][j] = c;
		}
	}

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			count = 0;
			count1 = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if (v[k][l] != v1[k - i][l - j]) {
						count++;
					}
					if (v[k][l] != v2[k - i][l - j]) {
						count1++;
					}
				}
			}
			v3.push_back(count);
			v3.push_back(count1);
			count3 += 2;
		}
	}

	int min_v3 = v3[0];
	for (int i = 0; i < count3; i++) {
		min_v3 = min(min_v3, v3[i]);
	}

	cout << min_v3;
}