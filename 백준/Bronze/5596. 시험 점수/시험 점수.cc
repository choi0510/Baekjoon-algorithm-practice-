#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int numS, numT;
	int sumS = 0;
	int sumT = 0;

	for (int i = 0; i < 4; i++) {
		cin >> numS;
		sumS += numS;
	}
	
	for (int i = 0; i < 4; i++) {
		cin >> numT;
		sumT += numT;
	}

	if (sumS >= sumT) {
		cout << sumS;
	}
	else {
		cout << sumT;
	}
}