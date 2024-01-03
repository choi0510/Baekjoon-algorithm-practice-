#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int R1, S;
	int R2;

	cin >> R1 >> S;

	R2 = (2 * S) - R1;
	cout << R2;
}