#include <iostream>
using namespace std;

int main() {
	int num;
	int result = 1;
	cin >> num;

	while (num > 0) {
		result *= num;
		num--;
	}
	cout << result;
	return 0;
}