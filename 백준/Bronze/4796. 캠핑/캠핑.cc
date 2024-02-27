#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int L, P, V;
	int sum = 0;
	int i = 1;

	while (true) {
		sum = 0;
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) {
			return 0;
		}

		int leftDays = V / P;
		int leftDay = V % P;
		
		while (leftDays--) {
			sum += L;
		}

		if (leftDay <= L) {
			sum += leftDay;
		}
		else {
			sum += L;
		}

		cout << "Case " << i++ << ": " << sum << '\n';
	}	
}