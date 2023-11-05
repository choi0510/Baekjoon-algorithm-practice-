#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int x, y;
	vector<int> v1;
	vector<int> v2;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		v1.push_back(x);
		v2.push_back(y);
	}

	int min_v1 = v1[0];
	int max_v1 = v1[0];
	int min_v2 = v2[0];
	int max_v2 = v2[0];

	for (int i = 0; i < N; i++) {
		min_v1 = min(min_v1, v1[i]);
		max_v1 = max(max_v1, v1[i]);
		min_v2 = min(min_v2, v2[i]);
		max_v2 = max(max_v2, v2[i]);
	}

	cout << abs(max_v1 - min_v1) * abs(max_v2 - min_v2);

}