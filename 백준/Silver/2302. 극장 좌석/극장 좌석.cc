#include <iostream>
using namespace std;

long long dp[45];
int N, M;
int seatNum[43];
long long sum = 1;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= 40; i++) {
		dp[i] = dp[i - 2] + dp[i - 1];
	}

	cin >> N;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> seatNum[i];
	}

	int st = 0;
	for (int i = 0; i < M; i++) {
		int en = seatNum[i];
		sum *= dp[en - st - 1];
		st = en;
	}
	
	sum *= dp[N - st];

	cout << sum;
}