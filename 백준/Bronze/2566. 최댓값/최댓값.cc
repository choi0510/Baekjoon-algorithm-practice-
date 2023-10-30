#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<vector<int>> v(9, vector<int>(9, 0));

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			int n;
			cin >> v[i][j];
		}
	}
	
	int max = v[0][0];
	int col=1;
	int row=1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			if (max > v[i][j]) {
				continue; 
			}
			else {
				col = i + 1;
				row = j + 1;
				max = v[i][j];
			}
		}
	}

	cout << max << "\n";
	cout << col << " " << row;
}