#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	vector<int> v1(1000003, 0);
	vector<int> v2(1000003, 0);
	vector<int> result(2000006, 0);

	cin >> N >> M;
	
	for (int i = 0; i < N; i++) {
		cin >> v1[i];
	}
	
	for (int i = 0; i < M; i++) {
		cin >> v2[i];
	}

	int Aidx = 0;
	int Bidx = 0;

	for (int i = 0; i < N + M; i++) {
		if (Aidx == N) {
			result[i] = v2[Bidx];
			Bidx++;
		}
		else if (Bidx == M) {
			result[i] = v1[Aidx];
			Aidx++;
		}
		else if (v1[Aidx] > v2[Bidx]) {
			result[i] = v2[Bidx];
			Bidx++;
		}
		else {
			result[i] = v1[Aidx];
			Aidx++;
		}
	}

	for (int i = 0; i < N + M; i++) {
		cout << result[i] << ' ';
	}
}