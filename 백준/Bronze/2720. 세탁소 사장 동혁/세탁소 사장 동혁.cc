#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int T;
	int C;
	int Q;
	int D;
	int N;
	int P;

	cin >> T;

	while (T--) {
		cin >> C;
		Q = C / 25;
		D = (C % 25) / 10;
		N = ((C % 25) % 10) / 5;
		P = (((C % 25) % 10) % 5) / 1;

		cout << Q << " " << D << " " << N << " " << P << "\n";
	}	
}