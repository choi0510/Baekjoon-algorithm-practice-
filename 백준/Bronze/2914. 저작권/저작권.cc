#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int n1, n2;
	cin >> n1 >> n2;

	cout << n1 * (n2 - 1) + 1;
}