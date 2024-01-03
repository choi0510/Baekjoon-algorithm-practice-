#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int K, N, M;

	cin >> K >> N >> M;

	int result = K * N;
	int real_result = result - M;
	if (real_result <= 0) {
		real_result = 0;
	}

	cout << real_result;
}