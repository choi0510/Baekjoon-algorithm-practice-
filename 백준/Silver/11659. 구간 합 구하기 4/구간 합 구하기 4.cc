#include <iostream>
using namespace std;

int arrN[100003];
int arrSum[100003];

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, M;
	int s, e;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		cin >> arrN[i];
	}

	arrSum[0] = 0;
	for (int i = 1; i <= N; i++) {
		arrSum[i] = arrSum[i - 1] + arrN[i];
	}

	for (int i = 0; i < M; i++) {
		cin >> s >> e;
		cout << arrSum[e] - arrSum[s - 1] << '\n';
	}
}