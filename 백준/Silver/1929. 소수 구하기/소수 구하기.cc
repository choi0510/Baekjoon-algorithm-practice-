#include <iostream>
#include <cmath>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	double N, M;
	bool isP = true;

	cin >> N >> M;

	// 제곱근을 이용한 풀이
	for (int i = N; i <= M; i++) {
		isP = true;
		int sq = ceil(sqrt(i));
		if (i == 1) {
			continue;
		}
		else if (i == 2) {
			cout << i << '\n';
			continue;
		}
		for (int j = 2; j <= sq; j++) {
			if (i % j == 0) {
				isP = false;
				break;
			}
		}
		if (isP == true) {
			cout << i << '\n';
		}
	}

}