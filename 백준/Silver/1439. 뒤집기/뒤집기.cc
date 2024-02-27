#include <iostream>
#include <algorithm>
using namespace std;

string num;
int countZero;
int countOne;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> num;

	for (int i = 1; i < num.size(); i++) {
		if (num[i - 1] != num[i]) {
			if (num[i - 1] == '0') countZero++;
			else countOne++;
		}

		if (i == num.size() - 1) {
			if (num[i] == '0') countZero++;
			else countOne++;
		}
	}

	cout << min(countZero, countOne);
}