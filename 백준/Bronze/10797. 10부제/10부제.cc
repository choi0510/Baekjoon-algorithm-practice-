#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int day;
	int carNum;
	int count = 0;

	cin >> day;
	for (int i = 0; i < 5; i++) {
		cin >> carNum;
		if (day == carNum) {
			count++;
		}
	}

	cout << count;
}