#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int result = 1;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		result *= 2;
	}
	cout << result;
}