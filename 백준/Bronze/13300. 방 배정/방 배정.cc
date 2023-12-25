#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N, K;
	int S, Y;
	int count = 0;
	int w_arr[6] = { 0, };
	int m_arr[6] = { 0, };
	cin >> N >> K;

	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		if (S == 0) {
			w_arr[Y-1]++;
		}
		else {
			m_arr[Y-1]++;
		}
	}

	for (int i = 0; i < 6; i++) {
		if (w_arr[i] == 0) {
			continue;
		}
		else if (w_arr[i] - K < 0) {
			count++;
		}
		else {
			if (w_arr[i] % K == 0) {
				count += w_arr[i] / K;
			}
			else {
				count += (w_arr[i] / K) + 1;
			}
		}
	}

	for (int i = 0; i < 6; i++) {
		if (m_arr[i] == 0) {
			continue;
		}
		else if (m_arr[i] - K < 0) {
			count++;
		}
		else {
			if (m_arr[i] % K == 0) {
				count += m_arr[i] / K;
			}
			else {
				count += (m_arr[i] / K) + 1;
			}
		}
	}
	cout << count;
}