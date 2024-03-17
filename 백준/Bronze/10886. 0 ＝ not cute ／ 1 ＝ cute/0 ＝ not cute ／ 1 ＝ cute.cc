#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int op;
	int isCute = 0;  // 1
	int isNotNute = 0;  // 0

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> op;
		if (op == 1) {
			isCute++;
		}
		else {
			isNotNute++;
		}
	}

	if (isCute > isNotNute) {
		cout << "Junhee is cute!";
	}
	else {
		cout << "Junhee is not cute!";
	}
}