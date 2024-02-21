#include <iostream>
using namespace std;

int N;
int arr[2003];
int dp[2003][2003];
int M;
int S, E;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}

	for (int i = N; i >= 1; i--) {
		for (int j = 1; j <= i; j++) {
			if (i == N || i == N - 1) {
				if (arr[j] != arr[j + (N - i)]) {
					dp[j][j + (N - i)] = 0;
				}
				else {
					dp[j][j + (N - i)] = 1;
				}
			}
			else {
				if (arr[j] != arr[j + (N - i)]) {
					dp[j][j + (N - i)] = 0;
				}
				else {
					if (dp[j + 1][(j + (N - i)) - 1] == 0) {
						dp[j][j + (N - i)] = 0;
					}
					else {
						dp[j][j + (N - i)] = 1;
					}
				}
			} 
		}
	}

	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> S >> E;
		cout << dp[S][E] << '\n';
	}
}