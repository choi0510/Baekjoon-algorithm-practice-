#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int E, S, M;

	cin >> E >> S >> M;

	for (int i = E; i <= 7980; i += 15) {
		if ((i - S) % 28 == 0 && (i - M) % 19 == 0) {
			cout << i;
			break;
		}
	}
}