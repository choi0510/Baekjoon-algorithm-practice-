#include <iostream>
using namespace std;

int main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	int N;
	int countTwo = 0;
	int countFive = 0;
	int countTen = 0;

	cin >> N;

	for (int i = N; i > 0; i--) {
		int num = i;
		while (num % 2 == 0 || num % 5 == 0) {
			if (num % 2 == 0) {
				num /= 2;
				countTwo++;
			}
			else if (num % 5 == 0) {
				num /= 5;
				countFive++;
			}
		}
	}

	while (countTwo > 0 && countFive > 0) {
		countTwo--;
		countFive--;
		countTen++;
	}

	cout << countTen;
}